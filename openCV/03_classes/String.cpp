#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    String str1 = "Hello";
    String str2 = "world";
    String str3 = str1 + " " + str2;
    bool ret = (str2 == "WORLD");

    string s1 = "Hello";
    string s2 = "world";
    string s3 = s1 + " " + s2;

    cout << "cv::String = " << str3 << endl;
    cout << "std::string = " << s3 << endl;
    cout << "ret: " << ret << endl;

    Mat imgs[3];
    for (int i=0; i<3; i++) {
        String filename = format("test%02d.bmp", i+1);
        // imgs[i] = imread(filename);
        cout << filename << endl;
    }
}