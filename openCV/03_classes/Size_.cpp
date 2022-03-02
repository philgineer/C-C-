#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    // Size_ class
    Size sz1;
    Size sz2(10, 20);
    
    cout << "init: " << sz1 << endl;

    sz1.width = 5; sz1.height = 10;

    cout << "sz1: " << sz1 << endl;
    cout << "sz2: " << sz2 << endl;

    Size sz3 = sz1 + sz2;
    Size sz4 = sz1 * 2;
    int area1 = sz4.area();

    cout << "sz3: " << sz3 << endl;
    cout << "sz4: " << sz4 << endl;
    cout << "area1: " << area1 << endl;
}