#include"opencv2\highgui\highgui.hpp"
#include"opencv2\imgproc\imgproc.hpp"

using namespace cv;

int main(int argc, char** argv)
{
	namedWindow("Example", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open(string(argv[1]) );
  
  Mat frame;
	for (;;)
	{		
		cap >> frame;
    if(frame.empty())
    {
      break;
    }
    imshow("Example", frame);
		if (waitKey(33) >= 0)
		{
			break;
		}
	}
	return 0;
}
