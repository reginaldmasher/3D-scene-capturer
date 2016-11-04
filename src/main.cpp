#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

#include <imageio.h>
#include <debug.h>

#define HOME_DATASET0 0
#define HOME_DATASET1 1
#define HV_DATASET0 2
#define HV_DATASET1 3

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	DEBUG_MSG("Creating Image Container...");	
	ImageContainer ic(false, HOME_DATASET0);
	DEBUG_MSG("Populating Image Set...");
	std::vector<Mat> images = ic.loadImageSet();
	DEBUG_MSG("Displaying last image...");
	namedWindow("Image Display", WINDOW_AUTOSIZE);
	imshow("Image Display", images.back());
	waitKey(0);
	return 0;
}
