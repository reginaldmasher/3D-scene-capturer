#include <opencv2/opencv2.hpp>
#include <debug.h>

#include <imageio.h>

using namespace cv;
using namespace std;

ImageContainer::ImageContainer(bool hypervision)
{
	this->hypervision = hypervision;

    if(hypervision)
    {
        
    }
    else
    {
				
    }
}

string ImageContainer::pathCreator(int index)
{
	return homepath.append(to_string(index)+".png");
}

void ImageContainer::loadImageSet()
{
	
}


