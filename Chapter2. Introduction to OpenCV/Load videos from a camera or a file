#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char** argv)
{
	namedWindow("Example", WINDOW_AUTOSIZE);
	VideoCapture cap;
	if (argc == 1)
	{
		cap.open(0);
	}
	else
	{
		cap.open(argv[1]);
	}
	if (!cap.isOpened())
	{
		std::cerr << "Can not open capture." << std::endl;
		return -1;
	}
	Mat frame;
	for (;;) 
	{
		cap >> frame;
		if (frame.empty())
		{
			break; // Ran out of film
		}
		imshow("Video_Play", frame);
		if (cv::waitKey(33) >= 0)
		{
			break;
		}		
	}
	return 0;
}
