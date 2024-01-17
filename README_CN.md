[简体中文](README_CN.md) | [English](README.md)



# RKNN Model Zoo

## 简介

RKNN Model Zoo基于 RKNPU SDK 工具链开发, 提供了目前主流算法的部署例程. 例程包含导出RKNN模型, 使用 Python API, CAPI 推理 RKNN 模型的流程.

- 例程支持 `RK3562`, `RK3566`, `RK3568`, `RK3588` 平台。(`RV1103`, `RV1106` 平台支持`mobilenet`, `yolov5` 例程)

- 暂不支持 `RK1808`, `RK3399PRO`, `RV1109`, `RV1126` 平台. 预计于下个版本支持. (`yolov5/6/7/8`, `yolox`, `ppyoloe` 例程, 在[`v1.5.0`](https://github.com/airockchip/rknn_model_zoo/tree/v1.5.0)版本中已经支持, 有需求的用户可切回[`v1.5.0`](https://github.com/airockchip/rknn_model_zoo/tree/v1.5.0)版本获取对应的demo)



## 依赖库安装

RKNN Model Zoo依赖 RKNN-Toolkit2 进行模型转换, 编译安卓demo时需要安卓编译工具链, 编译Linux demo时需要Linux编译工具链。这些依赖的安装请参考 https://github.com/airockchip/rknn-toolkit2/tree/master/doc 的 Quick Start 文档.

- 请注意, 安卓编译工具链建议使用 `r18` 或 `r19` 版本. 使用其他版本可能会遇到 Cdemo 编译失败的问题.



## 模型支持说明

以下demo除了从对应的仓库导出模型, 也可从网盘 https://console.zbox.filez.com/l/8ufwtG (提取码: rknn) 下载模型文件.

| Demo<br />(Clip to Description)                           | 算法类别   | Demo支持类型 | Pretrain model<br />(Clip to download)                       |
| --------------------------------------------------------- | ---------- | ------------ | ------------------------------------------------------------ |
| [mobilenet](./examples/mobilenet/README.md)               | 图像分类   | FP16/INT8    | [mobilenetv2-12.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/MobileNet/mobilenetv2-12.onnx) |
| [resnet](./examples/resnet/README.md)                     | 图像分类   | FP16/INT8    | [resnet50-v2-7.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ResNet/resnet50-v2-7.onnx) |
| [yolov5](./examples/yolov5/README.md)                     | 目标检测   | FP16/INT8    | [yolov5n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5n.onnx)<br />[yolov5s_relu.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5s_relu.onnx)<br />[yolov5s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5n.onnx)<br />[yolov5m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5/yolov5m.onnx) |
| [yolov6](./examples/yolov6/README.md)                     | 目标检测   | FP16/INT8    | [yolov6n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6n.onnx)<br />[yolov6s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6s.onnx)<br />[yolov6m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov6/yolov6m.onnx) |
| [yolov7](./examples/yolov7/README.md)                     | 目标检测   | FP16/INT8    | [yolov7-tiny.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov7/yolov7-tiny.onnx)<br />[yolov7.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov7/yolov7.onnx) |
| [yolov8](./examples/yolov8/README.md)                     | 目标检测   | FP16/INT8    | [yolov8n.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8n.onnx)<br />[yolov8s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8s.onnx)<br />[yolov8m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8/yolov8m.onnx) |
| [yolox](./examples/yolox/README.md)                       | 目标检测   | FP16/INT8    | [yolox_s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolox/yolox_s.onnx)<br />[yolox_m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolox/yolox_m.onnx) |
| [ppyoloe](./examples/ppyoloe/README.md)                   | 目标检测   | FP16/INT8    | [ppyoloe_s.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppyoloe/ppyoloe_s.onnx)<br />[ppyoloe_m.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppyoloe/ppyoloe_m.onnx) |
| [deeplabv3](./examples/deeplabv3/README.md)               | 图像分割   | FP16/INT8    | [deeplab-v3-plus-mobilenet-v2.pb](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/Deeplabv3/deeplab-v3-plus-mobilenet-v2.pb) |
| [yolov5-seg](./examples/yolov5_seg/README.md)             | 图像分割   | FP16/INT8    | [yolov5n-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5n-seg.onnx)<br />[yolov5s-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5s-seg.onnx)<br />[yolov5m-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov5_seg/yolov5m-seg.onnx) |
| [yolov8-seg](./examples/yolov8_seg/README.md)             | 图像分割   | FP16/INT8    | [yolov8n-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8n-seg.onnx)<br />[yolov8s-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8s-seg.onnx)<br />[yolov8m-seg.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/yolov8_seg/yolov8m-seg.onnx) |
| [ppseg](./examples/ppseg/README.md)                       | 图像分割   | FP16         | [pp_liteseg_cityscapes.onnx](https://ftzr.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/ppseg/pp_liteseg_cityscapes.onnx) |
| [RetinaFace](./examples/RetinaFace/README.md)             | 人脸关键点 | INT8         | [RetinaFace_mobile320.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/RetinaFace/RetinaFace_mobile320.onnx)<br />[RetinaFace_resnet50_320.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/RetinaFace/RetinaFace_resnet50_320.onnx) |
| [LPRNet](./examples/LPRNet/README.md)                     | 车牌识别   | FP16/INT8    | [lprnet.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/LPRNet/lprnet.onnx) |
| [PPOCR-Det](./examples/PPOCR/PPOCR-Det/README.md)         | 文字检测   | FP16/INT8    | [ppocrv4_det.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/PPOCR/ppocrv4_det.onnx) |
| [PPOCR-Rec](./examples/PPOCR/PPOCR-Rec/README.md)         | 文字识别   | FP16         | [ppocrv4_rec.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/PPOCR/ppocrv4_rec.onnx) |
| [lite_transformer](./examples/lite_transformer/README.md) | 语言翻译   | FP16         | [lite-transformer-encoder-16.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/lite_transformer/lite-transformer-encoder-16.onnx)<br />[lite-transformer-decoder-16.onnx](https://ftrg.zbox.filez.com/v2/delivery/data/95f00b0fc900458ba134f8b180b3f7a1/examples/lite_transformer/lite-transformer-decoder-16.onnx) |



## Model performance benchmark(FPS)

| demo             | model_name                   | inputs_shape            | dtype | RK3566<br />RK3568 | RK3562 | RK3588<br />@single_core |
| ---------------- | ---------------------------- | ----------------------- | ----- | ------------------ | ------ | ------ |
| mobilenet        | mobilenetv2-12               | [1, 3, 224, 224]        | INT8  | 197.4              | 266.8  | 433.0                    |
| resnet           | resnet50-v2-7                | [1, 3, 224, 224]        | INT8  | 40.6               | 54.5   | 108.6                    |
| yolov5           | yolov5s_relu                 | [1, 3, 640, 640]        | INT8  | 26.7               | 31.6   | 63.3                     |
|                  | yolov5n                      | [1, 3, 640, 640]        | INT8  | 41.6               | 43.8   | 68.1                     |
|                  | yolov5s                      | [1, 3, 640, 640]        | INT8  | 19.9               | 22.7   | 42.5                     |
|                  | yolov5m                      | [1, 3, 640, 640]        | INT8  | 8.7                | 10.6   | 19.3                     |
| yolov6           | yolov6n                      | [1, 3, 640, 640]        | INT8  | 50.2               | 51.5   | 93.8                     |
|                  | yolov6s                      | [1, 3, 640, 640]        | INT8  | 15.2               | 16.8   | 34.1                     |
|                  | yolov6m                      | [1, 3, 640, 640]        | INT8  | 7.5                | 8.0    | 17.6                     |
| yolov7           | yolov7-tiny                  | [1, 3, 640, 640]        | INT8  | 29.9               | 34.9   | 69.7                     |
|                  | yolov7                       | [1, 3, 640, 640]        | INT8  | 4.7                | 5.5    | 10.9                     |
| yolov8           | yolov8n                      | [1, 3, 640, 640]        | INT8  | 35.7               | 38.5   | 59.6                     |
|                  | yolov8s                      | [1, 3, 640, 640]        | INT8  | 15.4               | 17.1   | 32.8                     |
|                  | yolov8m                      | [1, 3, 640, 640]        | INT8  | 6.6                | 7.5    | 14.8                     |
| yolox            | yolox_s                      | [1, 3, 640, 640]        | INT8  | 15.5               | 17.7   | 32.9                     |
|                  | yolox_m                      | [1, 3, 640, 640]        | INT8  | 6.7                | 8.1    | 14.8                     |
| ppyoloe          | ppyoloe_s                    | [1, 3, 640, 640]        | INT8  | 17.5               | 19.7   | 32.9                     |
|                  | ppyoloe_m                    | [1, 3, 640, 640]        | INT8  | 7.9                | 8.3    | 16.2                     |
| deeplabv3        | deeplab-v3-plus-mobilenet-v2 | [1, 513, 513, 1]        | INT8  | 10.7               | 20.7   | 34.4                     |
| yolov5_seg       | yolov5n-seg                  | [1, 3, 640, 640]        | INT8  | 33.9               | 36.3   | 58.0                     |
|                  | yolov5s-seg                  | [1, 3, 640, 640]        | INT8  | 15.3               | 17.2   | 32.6                     |
|                  | yolov5m-seg                  | [1, 3, 640, 640]        | INT8  | 6.8                | 8.1    | 15.2                     |
| yolov8_seg       | yolov8n-seg                  | [1, 3, 640, 640]        | INT8  | 29.1               | 30.7   | 49.1                     |
|                  | yolov8s-seg                  | [1, 3, 640, 640]        | INT8  | 11.8               | 11.3   | 25.4                     |
|                  | yolov8m-seg                  | [1, 3, 640, 640]        | INT8  | 5.2                | 6.1    | 11.6                     |
| ppseg            | pp_liteseg_cityscapes | [1, 3, 512, 512]        | FP16  | 2.6                | 4.6    | 13.0                     |
| RetinaFace       | RetinaFace_mobile320         | [1, 3, 320, 320]        | INT8  | 142.5              | 279.5  | 234.7                    |
|                  | RetinaFace_resnet50_320      | [1, 3, 320, 320]        | INT8  | 18.5               | 26.0   | 48.8                     |
| LPRNet           | lprnet                       | [1, 3, 24, 94]          | INT8  | 58.2               | 119.7  | 204.4                    |
| PPOCR-Det        | ppocrv4_det                  | [1, 3, 480, 480]        | INT8  | 24.4               | 27.5   | 43.0                     |
| PPOCR-Rec        | ppocrv4_rec                  | [1, 3, 48, 320]         | FP16  | 20.0               | 45.1   | 35.7                     |
| lite_transformer | lite-transformer-encoder-16  | embedding-256, token-16 | FP16  | 130.8              | 656.7  | 261.5                    |
|                  | lite-transformer-decoder-16  | embedding-256, token-16 | FP16  | 114.3              | 151.3  | 164.0                    |

- 该性能数据基于各平台的最大NPU频率进行测试
- 该性能数据指模型推理的耗时, 不包含前后处理的耗时



## Demo编译说明

对于 Linux 系统的开发板:

```sh
./build-linux.sh -t <target> -a <arch> -d <build_demo_name> [-b <build_type>] [-m]
    -t : target (rk356x/rk3588/rv1106)
    -a : arch (aarch64/armhf)
    -d : demo name
    -b : build_type(Debug/Release)
    -m : enable address sanitizer, build_type need set to Debug

# 以编译64位Linux RK3566的yolov5 demo为例:
./build-linux.sh -t rk356x -a aarch64 -d yolov5
```

对于 Android 系统的开发板:

```sh
# 对于 Android 系统的开发板, 首先需要根据实际情况, 设置安卓NDK编译工具的路径
export ANDROID_NDK_PATH=~/opts/ndk/android-ndk-r18b
./build-android.sh -t <target> -a <arch> -d <build_demo_name> [-b <build_type>] [-m]
    -t : target (rk356x/rk3588)
    -a : arch (arm64-v8a/armeabi-v7a)
    -d : demo name
    -b : build_type (Debug/Release)
    -m : enable address sanitizer, build_type need set to Debug

# 以编译64位Android RK3566的yolov5 demo为例:
./build-android.sh -t rk356x -a arm64-v8a -d yolov5
```



## 版本说明

| 版本  | 说明                                                         |
| ----- | ------------------------------------------------------------ |
| 1.6.0 | 提供目标检测、图像分割、OCR、车牌识别等多个例程<br />支持`RK3562`, `RK3566`, `RK3568`, `RK3588`平台<br />部分支持`RV1103`, `RV1106`平台 |
| 1.5.0 | 提供Yolo检测模型的demo                                       |



## 环境依赖

RKNN Model Zoo 的例程基于当前最新的 RKNPU SDK 进行验证。若使用低版本的 RKNPU SDK 进行验证, 推理性能、推理结果可能会有差异。

| 版本  | RKNPU2 SDK | RKNPU1 SDK    |
| ----- | ---------- | ------------- |
| 1.6.0 | >=1.6.0    | - Coming soon |
| 1.5.0 | >=1.5.0    | >=1.7.3       |



## RKNPU相关资料

- RKNPU2 SDK: https://github.com/airockchip/rknn-toolkit2
- RKNPU1 SDK: https://github.com/airockchip/rknn-toolkit



## 许可证

[Apache License 2.0](./LICENSE)
