#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    // Rect_ class
    Rect rc1;
    Rect rc2(10, 10, 60, 40); // [60 x 40 from (10, 10)]
    Rect rc3 = rc1 + Size(50, 40);
    Rect rc4 = rc2 + Point(10, 10);

    cout << "rc1: " << rc1 << endl;
    cout << "rc2: " << rc2 << endl;
    cout << "rc3: " << rc3 << endl;
    cout << "rc4: " << rc4 << endl;

    Rect rc5 = rc3 & rc4;
    Rect rc6 = rc3 | rc4;

    cout << "rc5: " << rc5 << endl;
    cout << "rc6: " << rc6 << endl;
}