#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace cv;

/// Global variables
Mat src, dst, tmp;
char * window_name = "Pyramids Demo";

int main(int argc, char* argv[])
{
	printf("\n Zoom In-Out demo \n");
	printf("------------------ \n");
	printf("*[u] -> Zoom in \n");
	printf("*[d] -> Zoom out \n");
	printf("*[ESC] -> Close program \n \n");

	/// Test image - Make sure it a divisible by 2^(n)
	src = imread("baboon.jpg");
	if (!src.data)
	{
		printf(" No data! -- Exiting the program \n");
		return -1;
	}

	tmp = src;
	dst = tmp;

	/// Create window
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, dst);

	/// Loop
	while (true)
	{
		int control;
		control = waitKey(10);

		if ((char)control == 27)
		{
			break;
		}

		if ((char)control == 'u')
		{
			pyrUp(tmp, dst, Size(tmp.cols * 2, tmp.rows * 2));
			printf(" ** Zoom In: Image * 2 \n ");
		}
		else if ((char)control == 'd')
		{
			pyrDown(tmp, dst, Size(tmp.cols / 2, tmp.rows / 2));
			printf(" ** Zoom out: Image / 2 \n");
		}

		imshow(window_name, dst);
		tmp = dst;
	}
	return 0;
}
