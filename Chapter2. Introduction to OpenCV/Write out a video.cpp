#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char** argv)
{
	namedWindow("Example", cv::WINDOW_AUTOSIZE);
	namedWindow("Log_Polar", cv::WINDOW_AUTOSIZE);

	VideoCapture cap(0);
	VideoWriter writer("VideoTest.avi", CV_FOURCC('M', 'J', 'P', 'G'), 25.0, Size(640, 480));
	Mat frame;

	while (cap.isOpened())
	{
		cap >> frame;
		writer << frame;
		imshow("video", frame);
		if (cvWaitKey(20) == 27)
		{
			break;
		}
	}
	
}
