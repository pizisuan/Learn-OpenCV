#include<cv.h>
#include<highgui.h>
#include<iostream>

using namespace cv;

int main(int argc, char** argv)
{
	double alpha = 0.5;
	double beta;
	double user_input;

	Mat src1,src2,dst;

	// Ask the user enter alpha
	std::cout << " Simple Linear Blender " << std::endl;
	std::cout << " ----------------------" << std::endl;
	std::cout << " * Enter alpha [0-1] ";
	std::cin >> user_input;

	// We use the alpha provided by the user if it is between 0 and 1
	if (user_input>=0.0 && user_input<=1.0)
	{
		alpha = user_input;
	}

	// Read images
	src1 = imread("LinuxLogo.jpg");
	src2 = imread("WindowsLogo.jpg");
	if (!src1.data)
	{
		printf("Error loading src1.");
		return -1;
	}
	if (!src2.data)
	{
		printf("Error loading src2.");
		return -1;
	}

	// Create window
	namedWindow("Linear Blend",CV_WINDOW_AUTOSIZE);

	beta = 1 - alpha;
	addWeighted(src1,alpha,src2,beta,0.0,dst);

	imshow("Linear Blend",dst);

	waitKey(0);
	return 0;
}
