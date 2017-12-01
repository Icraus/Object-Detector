#include <iostream>
#include "ImageProcessor/detectcolor.h"
#include "ImageProcessor/detectcircle.h"

using namespace std;
using namespace ImageProcessor;
int main()
{
    cv::Mat m = cv::imread("E:\\1.png");
    cv::imshow("a", m);
    cv::waitKey(0);
}
