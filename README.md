[简体中文](README_CN.md) | [English](README.md)



# RKNN Model Zoo

## Description

`RKNN Model Zoo` is developed based on the RKNPU SDK toolchain and provides deployment examples for current mainstream algorithms. Include the process of `exporting the RKNN model` and using `Python API` and `CAPI` to infer the RKNN model.

- Support `RK3562`, `RK3566`, `RK3568`, `RK3588` ,  `RK3576`  platforms. 
- Limited support `RV1103`, `RV1106` 
- Support `RK1808`,  `RV1109`, `RV1126` platforms.



## Dependency library installation

`RKNN Model Zoo` relies on `RKNN-Toolkit2` for model conversion. The Android compilation tool chain is required when compiling the Android demo, and the Linux compilation tool chain is required when compiling the Linux demo. For the installation of these dependencies, please refer to the `Quick Start` documentation at https://github.com/airockchip/rknn-toolkit2/tree/master/doc.

- Please note that the Android compilation tool chain recommends using `version r18 or r19`. Using other versions may encounter the problem of Cdemo compilation failure.



## Model support

In addition to exporting the model from the corresponding respository, the models file are available on https://console.zbox.filez.com/l/8ufwtG (key: rknn). 

| Category | Name | Dtype | Model Download Link | Support platform |
| --- | --- | --- | --- | --- |
| Classification | [mobilenet](https://github.com/onnx/models/tree/8e893eb39b131f6d3970be6ebd525327d3df34ea/vision/classification/mobilenet/model/mobilenetv2-12.onnx) | FP16/INT8 | [mobilenetv2-12.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/mobilenet/mobilenetv2-12.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RV1103\|RV1106<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Classification | [resnet](https://github.com/onnx/models/tree/8e893eb39b131f6d3970be6ebd525327d3df34ea/vision/classification/resnet/model/resnet50-v2-7.onnx) | FP16/INT8 | [resnet50-v2-7.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/resnet/resnet50-v2-7.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov5](https://github.com/airockchip/yolov5) | FP16/INT8 | [./yolov5s_relu.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5s_relu.onnx)<br/>[./yolov5n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5n.onnx)<br/>[./yolov5s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5s.onnx)<br/>[./yolov5m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5m.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RV1103\|RV1106<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov6](https://github.com/airockchip/yolov6) | FP16/INT8 | [./yolov6n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6n.onnx)<br/>[./yolov6s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6s.onnx)<br/>[./yolov6m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6m.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov7](https://github.com/airockchip/yolov7) | FP16/INT8 | [./yolov7-tiny.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov7/yolov7-tiny.onnx)<br/>[./yolov7.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov7/yolov7.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov8](https://github.com/airockchip/ultralytics_yolov8) | FP16/INT8 | [./yolov8n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8n.onnx)<br/>[./yolov8s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8s.onnx)<br/>[./yolov8m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8m.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov8_obb](https://github.com/airockchip/ultralytics_yolov8) | INT8 | [./yolov8n-obb.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_obb/yolov8n-obb.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolov10](https://github.com/THU-MIG/yolov10) | FP16/INT8 | [./yolov10n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov10/yolov10n.onnx)<br/>[./yolov10s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov10/yolov10s.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RV1103\|RV1106<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolox](https://github.com/airockchip/YOLOX) | FP16/INT8 | [./yolox_s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolox/yolox_s.onnx)<br/>[./yolox_m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolox/yolox_m.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [ppyoloe](https://github.com/PaddlePaddle/PaddleDetection/blob/release/2.6/configs/ppyoloe) | FP16/INT8 | [./ppyoloe_s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppyoloe/ppyoloe_s.onnx)<br/>[./ppyoloe_m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppyoloe/ppyoloe_m.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Object Detection | [yolo_world](https://github.com/AILab-CVC/YOLO-World) | FP16/INT8 | [./yolo_world_v2s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolo_world/yolo_world_v2s.onnx)<br/>[./clip_text.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolo_world/clip_text.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/> |
| Body Pose | [yolov8_pose](https://github.com/airockchip/ultralytics_yolov8) | INT8 | [./yolov8n-pose.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_pose/yolov8n-pose.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/> |
| Image Segmentation | deeplabv3 | FP16/INT8 | [./deeplab-v3-plus-mobilenet-v2.pb](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/deeplabv3/deeplab-v3-plus-mobilenet-v2.pb) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Image Segmentation | [yolov5_seg](https://github.com/airockchip/yolov5) | FP16/INT8 | [./yolov5n-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5n-seg.onnx)<br/>[./yolov5s-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5s-seg.onnx)<br/>[./yolov5m-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5m-seg.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Image Segmentation | [yolov8_seg](https://github.com/airockchip/ultralytics_yolov8) | FP16/INT8 | [./yolov8n-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8n-seg.onnx)<br/>[./yolov8s-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8s-seg.onnx)<br/>[./yolov8m-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8m-seg.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Image Segmentation | [ppseg](https://github.com/PaddlePaddle/PaddleSeg/tree/release/2.8) | FP16/INT8 | [pp_liteseg_cityscapes.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppseg/pp_liteseg_cityscapes.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Image Segmentation | [mobilesam](https://github.com/ChaoningZhang/MobileSAM) | FP16 | [mobilesam_encoder_tiny.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/mobilesam/mobilesam_encoder_tiny.onnx)<br />[mobilesam_decoder.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/mobilesam/mobilesam_decoder.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576 |
| Face Key Points | [RetinaFace](https://github.com/biubug6/Pytorch_Retinaface) | INT8 | [RetinaFace_mobile320.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/RetinaFace/RetinaFace_mobile320.onnx)<br/>[RetinaFace_resnet50_320.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/RetinaFace/RetinaFace_resnet50_320.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Car Plate Recognition | [LPRNet](https://github.com/sirius-ai/LPRNet_Pytorch/) | FP16/INT8 | [./lprnet.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/LPRNet/lprnet.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Text Detection | [PPOCR-Det](https://github.com/PaddlePaddle/PaddleOCR/tree/release/2.7) | FP16/INT8 | [../ppocrv4_det.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/PPOCR/ppocrv4_det.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Text Recognition | [PPOCR-Rec](https://github.com/PaddlePaddle/PaddleOCR/tree/release/2.7) | FP16 | [../ppocrv4_rec.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/PPOCR/ppocrv4_rec.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Neural Machine Translation | [lite_transformer](https://github.com/airockchip/lite-transformer) | FP16 | [lite-transformer-encoder-16.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/lite_transformer/lite-transformer-encoder-16.onnx)<br/>[lite-transformer-decoder-16.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/lite_transformer/lite-transformer-decoder-16.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/>RK1808\|RK3399PRO<br/>RV1109\|RV1126 |
| Image-Text Matching | [clip](https://huggingface.co/openai/clip-vit-base-patch32) | FP16 | [./clip_images.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/clip/clip_images.onnx)<br/>[./clip_text.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/clip/clip_text.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/> |
| Speech Recognition | [wav2vec2](https://github.com/facebookresearch/fairseq/tree/main/examples/wav2vec#wav2vec-20) | FP16 | [wav2vec2_base_960h_20s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/wav2vec2/wav2vec2_base_960h_20s.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576 |
| Speech Recognition | [whisper](https://github.com/openai/whisper) | FP16 | [whisper_encoder_base_20s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/whisper/whisper_encoder_base_20s.onnx)<br/>[whisper_decoder_base_20s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/whisper/whisper_decoder_base_20s.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576<br/> |
| Speech Classification | [yamnet](https://www.tensorflow.org/hub/tutorials/yamnet) | FP16 | [yamnet_3s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yamnet/yamnet_3s.onnx) | RK3566\|RK3568\|RK3588\|RK3562\|RK3576 |




## Model performance benchmark(FPS)

| demo             | model_name                          | inputs_shape&nbsp;&nbsp;&nbsp;&nbsp; | dtype | RK3566<br />RK3568 | RK3562         | RK3588<br />@single_core | RK3576<br />@single_core | RV1109     | RV1126     | RK1808     |
| ---------------- | ----------------------------------- | ------------------------------------ | ----- | ------------------ | -------------- | ------------------------ | ------------------------ | ---------- | ---------- | ---------- |
| mobilenet        | mobilenetv2-12                      | [1, 3, 224, 224]                     | INT8  | 184.3              | 295.5          | 455.4                    | 467.2                    | 212.9      | 322.3      | 170.3      |
| resnet           | resnet50-v2-7                       | [1, 3, 224, 224]                     | INT8  | 38.5               | 56.1           | 110.4                    | 99.8                     | 24.4       | 36.2       | 37.1       |
| yolov5           | yolov5s_relu                        | [1, 3, 640, 640]                     | INT8  | 25.6               | 33.7           | 66.2                     | 65.4                     | 20.2       | 29.2       | 37.2       |
|                  | yolov5n                             | [1, 3, 640, 640]                     | INT8  | 39.8               | 48.9           | 82.9                     | 113.0                    | 36.3       | 53.2       | 61.2       |
|                  | yolov5s                             | [1, 3, 640, 640]                     | INT8  | 19.5               | 23.9           | 48.5                     | 57.7                     | 13.6       | 20.0       | 28.2       |
|                  | yolov5m                             | [1, 3, 640, 640]                     | INT8  | 8.7                | 11.0           | 20.9                     | 23.8                     | 5.8        | 8.5        | 13.3       |
| yolov6           | yolov6n                             | [1, 3, 640, 640]                     | INT8  | 49.0               | 57.4           | 106.8                    | 110.3                    | 37.8       | 56.8       | 66.8       |
|                  | yolov6s                             | [1, 3, 640, 640]                     | INT8  | 15.3               | 17.5           | 36.4                     | 34.8                     | 10.8       | 16.3       | 24.1       |
|                  | yolov6m                             | [1, 3, 640, 640]                     | INT8  | 7.3                | 8.6            | 17.6                     | 17.5                     | 5.6        | 8.3        | 11.5       |
| yolov7           | yolov7-tiny                         | [1, 3, 640, 640]                     | INT8  | 28.0               | 37.1           | 72.9                     | 75.1                     | 15.4       | 22.4       | 37.2       |
|                  | yolov7                              | [1, 3, 640, 640]                     | INT8  | 4.7                | 5.9            | 11.5                     | 13.0                     | 3.3        | 4.8        | 7.4        |
| yolov8           | yolov8n                             | [1, 3, 640, 640]                     | INT8  | 34.4               | 41.5           | 74.0                     | 90.2                     | 24.0       | 35.4       | 42.3       |
|                  | yolov8s                             | [1, 3, 640, 640]                     | INT8  | 15.2               | 18.3           | 35.2                     | 41.0                     | 8.9        | 13.1       | 19.1       |
|                  | yolov8m                             | [1, 3, 640, 640]                     | INT8  | 6.6                | 8.3            | 16.2                     | 16.7                     | 3.9        | 5.8        | 9.1        |
| yolov8_obb       | yolov8n-obb                         | [1, 3, 640, 640]                     | INT8  | 34.3               | 41.7           | 74.1                     | 91.0                     | 25.1       | 37.3       | 42.8       |
| yolov10          | yolov10n                            | [1, 3, 640, 640]                     | INT8  | 21.1               | 31.7           | 56.1                     | 74.5                     | /          | /          | /          |
|                  | yolov10s                            | [1, 3, 640, 640]                     | INT8  | 10.4               | 16.1           | 32.0                     | 38.2                     | /          | /          | /          |
| yolox            | yolox_s                             | [1, 3, 640, 640]                     | INT8  | 15.3               | 18.4           | 37.1                     | 42.0                     | 10.6       | 15.7       | 23.0       |
|                  | yolox_m                             | [1, 3, 640, 640]                     | INT8  | 6.7                | 8.3            | 16.0                     | 17.6                     | 4.6        | 6.8        | 10.7       |
| ppyoloe          | ppyoloe_s                           | [1, 3, 640, 640]                     | INT8  | 7.5                | 20.4           | 31.9                     | 41.5                     | 11.2       | 16.4       | 21.1       |
|                  | ppyoloe_m                           | [1, 3, 640, 640]                     | INT8  | 4.2                | 9.3            | 15.3                     | 17.8                     | 5.2        | 7.7        | 9.4        |
| yolo_world       | yolo_world_v2s                      | [1, 3, 640, 640]                     | INT8  | 7.5                | 9.6            | 22.2                     | 22.1                     | /          | /          | /          |
|                  | clip_text                           | [1, 20]                              | FP16  | 28.33              | 64.6           | 92.4                     | 61.7                     | /          | /          | /          |
| yolov8_pose      | yolov8n-pose                        | [1, 3, 640, 640]                     | INT8  | 23.0               | 31.6           | 56.0                     | 67.2                     | /          | /          | /          |
| deeplabv3        | deeplab-v3-plus-mobilenet-v2        | [1, 513, 513, 1]                     | INT8  | 10.0               | 21.6           | 34.3                     | 39.6                     | 10.1       | 13.0       | 4.4        |
| yolov5_seg       | yolov5n-seg                         | [1, 3, 640, 640]                     | INT8  | 32.6               | 40.0           | 69.5                     | 89.2                     | 28.6       | 42.2       | 49.6       |
|                  | yolov5s-seg                         | [1, 3, 640, 640]                     | INT8  | 15.1               | 18.3           | 36.9                     | 41.8                     | 9.6        | 14.0       | 22.5       |
|                  | yolov5m-seg                         | [1, 3, 640, 640]                     | INT8  | 6.8                | 8.5            | 16.4                     | 18.0                     | 4.7        | 6.8        | 10.8       |
| yolov8_seg       | yolov8n-seg                         | [1, 3, 640, 640]                     | INT8  | 28.1               | 33.7           | 61.0                     | 71.5                     | 18.6       | 27.6       | 32.9       |
|                  | yolov8s-seg                         | [1, 3, 640, 640]                     | INT8  | 11.8               | 14.2           | 29.0                     | 30.9                     | 6.6        | 9.8        | 14.6       |
|                  | yolov8m-seg                         | [1, 3, 640, 640]                     | INT8  | 5.2                | 6.4            | 12.6                     | 12.8                     | 3.1        | 4.6        | 6.9        |
| ppseg            | ppseg_lite_1024x512                 | [1, 3, 512, 512]                     | INT8  | 4.4                | 12.0           | 29.9                     | 29.2                     | 18.4       | 27.1       | 20.9       |
| mobilesam        | mobilesam_encoder_tiny              | [1, 3, 448, 448]                     | FP16  | 0.9                | 6.7            | 9.8                      | 12.0                     | /          | /          | /          |
|                  | mobilesam_decoder                   | [1, 1, 112, 112]                     | FP16  | 23.3               | 71.3           | 116.3                    | 108.9                    | /          | /          | /          |
| RetinaFace       | RetinaFace_mobile320                | [1, 3, 320, 320]                     | INT8  | 157.0              | 316.5          | 230.3                    | 476.6                    | 144.8      | 212.5      | 198.5      |
|                  | RetinaFace_resnet50_320             | [1, 3, 320, 320]                     | INT8  | 18.8               | 26.8           | 49.4                     | 56.8                     | 14.6       | 20.8       | 24.6       |
| LPRNet           | lprnet                              | [1, 3, 24, 94]                       | FP16  | 154.7              | 320.0          | 432.8                    | 492.5                    | 30.6(INT8) | 47.6(INT8) | 30.1(INT8) |
| PPOCR-Det        | ppocrv4_det                         | [1, 3, 480, 480]                     | INT8  | 22.6               | 28.9           | 50.8                     | 64.8                     | 11.0       | 16.1       | 14.2       |
| PPOCR-Rec        | ppocrv4_rec                         | [1, 3, 48, 320]                      | FP16  | 19.7               | 54.1           | 74.3                     | 96.6                     | 1.0        | 1.6        | 6.7        |
| lite_transformer | lite-transformer-encoder-16         | embedding-256, token-16              | FP16  | 331.6              | 728.8          | 878.5                    | 786.4                    | 22.7       | 35.4       | 98.3       |
|                  | lite-transformer-decoder-16         | embedding-256, token-16              | FP16  | 142.4              | 252.2          | 346.3                    | 270.3                    | 48.0       | 65.8       | 109.9      |
| clip             | clip_images                         | [1, 3, 224, 224]                     | FP16  | 2.3                | 3.4            | 6.5                      | 6.7                      | /          | /          | /          |
|                  | clip_text                           | [1, 20]                              | FP16  | 28.33              | 64.6           | 92.5                     | 61.5                     | /          | /          | /          |
| wav2vec2         | wav2vec2_base_960h_20s              | 20s audio                            | FP16  | RTF <br/>0.861     | RTF <br/>0.333 | RTF <br/>0.131           | RTF <br/>0.073           | /          | /          | /          |
| whisper          | encoder+decoder+NPU-outside process | 20s audio                            | FP16  | RTF <br/>1.253     | RTF <br/>0.417 | RTF <br/>0.219           | RTF <br/>0.216           | /          | /          | /          |
| yamnet           | yamnet_3s                           | 3s audio                             | FP16  | RTF <br/>0.013     | RTF <br/>0.008 | RTF <br/>0.004           | RTF <br/>0.005           | /          | /          | /          |

- This performance data are collected based on the maximum NPU frequency of each platform.
- This performance data calculate the time-consuming of model inference. Does not include the time-consuming of pre-processing and post-processing if not specified.
- `/` means currently not support.



## Compile Demo

For Linux develop board:

```sh
./build-linux.sh -t <target> -a <arch> -d <build_demo_name> [-b <build_type>] [-m]
    -t : target (rk356x/rk3588/rk3576/rv1106/rk1808/rv1126)
    -a : arch (aarch64/armhf)
    -d : demo name
    -b : build_type(Debug/Release)
    -m : enable address sanitizer, build_type need set to Debug
Note: 'rk356x' represents rk3562/rk3566/rk3568, 'rv1106' represents rv1103/rv1106, 'rv1126' represents rv1109/rv1126

# Here is an example for compiling yolov5 demo for 64-bit Linux RK3566.
./build-linux.sh -t rk356x -a aarch64 -d yolov5
```

For Android development board:

```sh
# For Android develop boards, it's require to set path for Android NDK compilation tool path according to the user environment
export ANDROID_NDK_PATH=~/opts/ndk/android-ndk-r18b
./build-android.sh -t <target> -a <arch> -d <build_demo_name> [-b <build_type>] [-m]
    -t : target (rk356x/rk3588/rk3576)
    -a : arch (arm64-v8a/armeabi-v7a)
    -d : demo name
    -b : build_type (Debug/Release)
    -m : enable address sanitizer, build_type need set to Debug

# Here is an example for compiling yolov5 demo for 64-bit Android RK3566.
./build-android.sh -t rk356x -a arm64-v8a -d yolov5
```



## Release Notes

| Version | Description                                                  |
| ------- | ------------------------------------------------------------ |
| 2.2.0   | New demo wav2vec, mobilesam release. Update demo guide about exporting model. |
| 2.1.0   | New demo release, including yolov8_pose, yolov8_obb, yolov10, yolo_world, clip, whisper, yamnet<br>`RK1808`, `RV1109`, `RV1126` platform support of these demo will be added in next version. |
| 2.0.0   | Add new support for `RK3576` for all demo.<br />Full support for `RK1808`,  `RV1109`, `RV1126` platform. |
| 1.6.0   | New demo release, including object detection, image segmentation, OCR, car plate detection&recognition etc.<br />Full support for `RK3566`, `RK3568`, `RK3588`, `RK3562` platforms.<br />Limited support for `RV1103`, `RV1106` platforms. |
| 1.5.0   | Yolo detection demo release.                                 |



## Environment dependencies

All demos in `RKNN Model Zoo` are verified based on the latest RKNPU SDK. If using a lower version for verification, the inference performance and inference results may be wrong.

| Version | RKNPU2 SDK | RKNPU1 SDK |
| ------- | ---------- | ---------- |
| 2.2.0   | >=2.2.0    | >=1.7.5    |
| 2.1.0   | >=2.1.0    | >=1.7.5    |
| 2.0.0   | >=2.0.0    | >=1.7.5    |
| 1.6.0   | >=1.6.0    | -          |
| 1.5.0   | >=1.5.0    | >=1.7.3    |



## RKNPU Resource

- RKNPU2 SDK: https://github.com/airockchip/rknn-toolkit2
- RKNPU1 SDK: https://github.com/airockchip/rknn-toolkit



## License

[Apache License 2.0](./LICENSE)

