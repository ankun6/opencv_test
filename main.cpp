#include <iostream>
#include "opencv.hpp"
#include <stdint.h>
#include <errno.h>

extern int errno;

using  namespace std;
using namespace cv;

int test()
{
    char key;
    Mat frame;
    VideoCapture cap;

    //  1. 打开摄像头
    if (!cap.open(0))
    {
        fprintf(stderr, "Open capture faild. ErrCode:%d \r\n", errno);
        return -1;
    }

    // 2. 实时显示视频
    while (true)
    {
        cap >> frame;
        imshow("video", frame);
        key = (char)waitKey(30);
        if (key == 'q' || key == 'Q')
            break;
    }

    // 3. 释放资源
    cap.release();
    cvDestroyAllWindows();
    return 0;
}

int main()
{
    test();
    return 0;
}

