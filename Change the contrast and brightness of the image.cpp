#include <cv.h>
#include <highgui.h>
#include <iostream>

using namespace cv;

double alpha;  /* Simple contrast control  */
int beta;      /* Simple brightness control */

int main(int argc, char** argv)
{
	/// Read image given by user
	Mat image = imread(argv[1]);
	Mat new_image = Mat::zeros(image.size(),image.type());

	/// Initialize values
	std::cout<<" Basic Linear Transforms "<<std::endl;
	std::cout<<"-------------------------"<<std::endl;
	std::cout<<" * Enter the alpha value [1.0-3.0]: ";std::cin>>alpha;
	std::cout<<" * Enter the beta value [0-100]: "; std::cin>>beta;

	/// Do the operation new _ image(i,j) = alpha * image(i,j) + beta
	for (int y = 0; y < image.rows; y++)
	{
		for ( int x = 0; x < image.cols; x++)
		{
			for ( int c = 0; c < 3; c++)
			{
				new_image.at<Vec3b>(y,x) = saturate_cast<uchar>( alpha * ( image.at<Vec3b>(y,x)[c] ) + beta );
			}
		}
	}

	/************************************************************************/
	/* 
	Another way to do the operation 
	image.convertTo(new _ image, -1, alpha, beta);

	where convertTo would effectively perform new_image = a*image + beta. However, we wanted to show you how to
	access each pixel. In any case, both methods give the same result but convertTo is more optimized and works a lot
	faster.
	
	*/
	/************************************************************************/

	/// Create Windows
	namedWindow("Original Image", 1);
	namedWindow("New Image", 1);
	/// Show stuff
	imshow("Original Image", image);
	imshow("New Image", new_image);
	/// Wait until user press some key
	waitKey();
	return 0;
}
