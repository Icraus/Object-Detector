#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
    cv::Mat src = imread("C:\\Users\\Shoka\\Pictures\\Camera\ Roll\\2.jpg");
    cv::Mat temp = imread("C:\\Users\\Shoka\\Pictures\\Camera\ Roll\\1.jpg");
    cv::Mat res;
    int cols = src.cols + 1;
    int rows = src.rows + 1;

    res.create(rows, cols, CV_32FC1);

    matchTemplate(src, temp, res,  CV_TM_SQDIFF_NORMED);
    normalize( res, res, 0, 1, NORM_MINMAX, -1, Mat() );
    double minVal; double maxVal; Point minLoc; Point maxLoc;
    Point matchLoc;
    minMaxLoc( res, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );
    matchLoc = minLoc;
    rectangle( src, matchLoc, Point( matchLoc.x + temp.cols , matchLoc.y + temp.rows ), Scalar::all(0), 2, 8, 0 );
      rectangle( res, matchLoc, Point( matchLoc.x + temp.cols , matchLoc.y + temp.rows ), Scalar::all(0), 2, 8, 0 );

      imshow("A", src);
      imshow("B", res);
    waitKey();

}
