// Copyright (c) 2024 by Rockchip Electronics Co., Ltd. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*-------------------------------------------
                Includes
-------------------------------------------*/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wav2vec2.h"
#include "audio_utils.h"
#include "easy_timer.h"

/*-------------------------------------------
                  Main Function
-------------------------------------------*/
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("%s <model_path> <audio_path>\n", argv[0]);
        return -1;
    }

    const char *model_path = argv[1];
    const char *audio_path = argv[2];

    int ret;
    TIMER timer;
    float infer_time = 0.0;
    float audio_length = 0.0;
    float rtf = 0.0;
    rknn_app_context_t rknn_app_ctx;
    audio_buffer_t audio;
    std::vector<float> audio_data(N_SAMPLES);
    std::vector<std::string> recognized_text;
    memset(&rknn_app_ctx, 0, sizeof(rknn_app_context_t));
    memset(&audio, 0, sizeof(audio_buffer_t));

    timer.tik();
    ret = read_audio(audio_path, &audio);
    if (ret != 0)
    {
        printf("read audio fail! ret=%d audio_path=%s\n", ret, audio_path);
        goto out;
    }
    timer.tok();
    timer.print_time("read_audio");

    timer.tik();
    audio_preprocess(&audio, audio_data);
    timer.tok();
    timer.print_time("audio_preprocess");

    timer.tik();
    ret = init_wav2vec2_model(model_path, &rknn_app_ctx);
    if (ret != 0)
    {
        printf("init_wav2vec2_model fail! ret=%d model_path=%s\n", ret, model_path);
        goto out;
    }
    timer.tok();
    timer.print_time("init_wav2vec2_model");

    timer.tik();
    ret = inference_wav2vec2_model(&rknn_app_ctx, audio_data, recognized_text);
    if (ret != 0)
    {
        printf("inference_wav2vec2_model fail! ret=%d\n", ret);
        goto out;
    }
    timer.tok();
    timer.print_time("inference_wav2vec2_model");

    // print result
    std::cout << "\nWav2vec2 output: ";
    for (const auto &str : recognized_text)
    {
        std::cout << str;
    }
    std::cout << std::endl;

    infer_time = timer.get_time() / 1000.0; // sec
    audio_length = (float)CHUNK_LENGTH;     // sec
    rtf = infer_time / audio_length;
    printf("\nReal Time Factor (RTF): %.3f / %.3f = %.3f\n", infer_time, audio_length, rtf);

out:

    ret = release_wav2vec2_model(&rknn_app_ctx);
    if (ret != 0)
    {
        printf("release_wav2vec2_model encoder_context fail! ret=%d\n", ret);
    }

    if (audio.data != NULL)
    {
        free(audio.data);
    }

    return 0;
}
