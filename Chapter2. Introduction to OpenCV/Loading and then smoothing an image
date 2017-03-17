#include"opencv2\opencv.hpp"

using namespace cv;

int main(int argc, char** argv)
{
	namedWindow("Example_In", WINDOW_AUTOSIZE);
	namedWindow("Example_Out", WINDOW_AUTOSIZE);

	Mat image = imread(argv[1]);
	imshow("Example_In", image);

	Mat out;
	GaussianBlur(image, out, Size(5, 5), 3, 3);
	GaussianBlur(out, out, Size(5, 5), 3, 3);
	imshow("Example_Out", out);

	waitKey(0);
}
