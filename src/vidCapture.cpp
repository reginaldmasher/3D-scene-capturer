#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Mat frame;
	VideoCapture v_cap;

	int deviceID = 0;
	int apiID = cv::CAP_ANY;

	 v_cap.open(deviceID + apiID);

	if(!v_cap.isOpened())
	{
		cerr << "ERROR: Unable to open camera\n";
		return -1;
	}

	cout << "Start grabbing..." << endl;
	cout << "Press any key to terminate" << endl;

	for(;;)
	{
		v_cap.read(frame);
		if(frame.empty())
		{
			cerr << "ERROR: Frame empty" << endl;
			break;
		}

		imshow("Webcam Live", frame);
		if (waitKey(5) >= 0)
			break;
	}

	return 0;
}

