#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);

    Point2f pts[4];
    rr1.points(pts);

    Rect br = rr1.boundingRect();

    cout << "Angle: " << rr1.angle << endl;
    cout << "Points: " << *pts << endl;
    cout << "BoundingRect: : " << br << endl;

}