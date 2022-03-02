#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    // Point_ class
    Point pt1;

    cout << "init: " << pt1 << endl;

    pt1.x = 5; pt1.y = 10;
    Point pt2(10, 30);

    cout << "pt1: " << pt1 << endl;
    cout << "pt2: " << pt2 << endl;

    Point pt3 = pt1 + pt2;
    Point pt4 = pt1 * 2;
    int d1 = pt1.dot(pt2);
    bool b1 = (pt1 == pt2);

    cout << "pt3: " << pt3 << endl;
    cout << "pt4: " << pt4 << endl;
    cout << "d1: " << d1 << endl;
    cout << "b1: " << b1 << endl;
}