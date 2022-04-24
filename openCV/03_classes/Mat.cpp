#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat img1;
    Mat img2(480, 640, CV_8U); // rows (h), cols (w), type
    Mat img3(480, 640, CV_8UC3);
    Mat img4(Size(640, 480), CV_8UC3); // Size(w, h)

    Mat img5(480, 640, CV_8U, Scalar(128));
    Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255)); // BGR

    Mat mat1 = Mat::zeros(3, 3, CV_32S);
    Mat mat2 = Mat::ones(3, 3, CV_32F);
    Mat mat3 = Mat::eye(3, 3, CV_32F);

    cout << "mat1:\n" << mat1 << endl;
    cout << "mat2:\n" << mat2 << endl;
    cout << "mat3:\n" << mat3 << endl;

    float data[] = {1, 2, 3, 4, 5, 6};
    Mat mat4(2, 3, CV_32F, data);

    cout << "mat4:\n" << mat4 << endl;

    Mat_<float> mat5_(2, 3);
    mat5_ << 1, 2, 3, 4, 5, 6;
    Mat mat5 = mat5_;

    cout << "mat5:\n" << mat5 << endl;
}