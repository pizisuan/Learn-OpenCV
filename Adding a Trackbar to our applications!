#include"cv.h"
#include"highgui.h"

using namespace cv;

const int alpha_slider_max = 100;
int alpha_slider;
double alpha, beta;

Mat src1, src2, dst;

void onTrackbar(int, void*)
{
	alpha = (double)alpha_slider / alpha_slider_max;
	beta = 1.0 - alpha;
	addWeighted(src1, alpha, src2, beta, 0.0, dst);
	imshow("Linear Blend", dst);
}

int main(int argc, char** argv)
{
	// Read images(same type, same size)
	src1 = imread(argv[1]);
	src2 = imread(argv[2]);
	if (!src1.data)
	{
		printf("Error loading src1\n");
		return -1;
	}
	if (!src2.data)
	{
		printf("Error loading src2\n");
		return -1;
	}

	alpha_slider = 0;
	namedWindow("Linear Blend", 1);

	//Create trackbar
	char TrackbarName[50];
	sprintf(TrackbarName, "alpha * %d", alpha_slider_max);
	createTrackbar(TrackbarName, "Linear Blend", &alpha_slider, alpha_slider_max, onTrackbar);

	onTrackbar(alpha_slider,0);

	waitKey(0);
	return 0;
}
