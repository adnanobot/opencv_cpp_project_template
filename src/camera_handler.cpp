#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
    cv::Mat image = imread("..\\image.jpg");
    imshow("image", image);
    waitKey(0);
}