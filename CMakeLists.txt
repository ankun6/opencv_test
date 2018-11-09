cmake_minimum_required(VERSION 3.12)
project(opencv_test)

# C++11标准
set(CMAKE_CXX_STANDARD 11)

# opencv路径
set(OpenCV_INCLUDE_DIR
        "D:\\opencv-3.0.0_mingw53\\include"
        "D:\\opencv-3.0.0_mingw53\\include\\opencv"
        "D:\\opencv-3.0.0_mingw53\\include\\opencv2"
        )

# opencv库
set(OpenCV_LIBS
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_calib3d300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_core300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_features2d300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_flann300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_hal300.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_highgui300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_imgcodecs300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_imgproc300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_ml300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_objdetect300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_photo300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_shape300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_stitching300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_superres300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_ts300.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_video300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_videoio300.dll.a"
        "D:/opencv-3.0.0_mingw53/x86/mingw/lib/libopencv_videostab300.dll.a"
        )

add_executable(${PROJECT_NAME} main.cpp)

# 添加包含目录
include_directories(${PROJECT_NAME} ${OpenCV_INCLUDE_DIR})

# 添加链接库目录
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

