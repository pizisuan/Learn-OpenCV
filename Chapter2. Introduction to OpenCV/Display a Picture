#include"opencv2\highgui\highgui.hpp"
using namespace cv;

int main(int argc, char** argv)
{
	Mat img = cv::imread(argv[1], -1);
	if (img.empty())
	{
		return -1;
	}
	namedWindow("Example1", 0);
	imshow("Example1", img);
	waitKey(0);
	destroyWindow("Example1");
	return 0;
}
