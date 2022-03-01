#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;

int main()
{
    Mat img;
    img = imread("../img/lenna.bmp");

    if (img.empty()) {
        std::cerr << "Image load failed" << std::endl;
        return -1;
    }

    namedWindow("image");
    imshow("image", img);

    waitKey();
    return 0;
}