#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Range r1(0, 10);
    cout << "Size: " << r1.size() << endl;
    cout << "Empty: " << r1.empty() << endl;
    cout << "All size: " << r1.all().size() << endl;
}