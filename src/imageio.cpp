#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <debug.h>

#include <imageio.h>

using namespace cv;
using namespace std;

ImageContainer::ImageContainer(bool hypervision, int data_set)
{	
    if(hypervision)
    {
    	switch(data_set)
		{
			case 0:
				curr_path = hv_dataset0;
				break;
		}
    }
    else
    {  
		switch(data_set)
		{
			case 0:
				curr_path = home_dataset0;
				this->set_size = 1509;
				break;
		}	    			
    }
}

string ImageContainer::pathCreator(int index)
{
	return curr_path + to_string(index)+ ".png";
}

std::vector<Mat> ImageContainer::loadImageSet()
{
	std::vector<Mat> image_set;
	Mat temp_image;
	for(int i = 0; i < set_size; i++)
	{
		temp_image = imread(pathCreator(i),	CV_LOAD_IMAGE_COLOR);
		image_set.push_back(temp_image);
	}
	
	return image_set;
}


