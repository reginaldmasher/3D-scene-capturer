#ifndef IMAGEIO_H
#define IMAGEIO_H

class ImageContainer
{
		const std::string home_dataset0 = "/home/reginald/Pictures/Masters/living_room_traj0_frei_png/rgb/";	
		const std::string hv_dataset0;
		std::string curr_path;
		int set_size;
		std::string pathCreator(int index);
	public:
		ImageContainer(bool inhypervision, int data_set);	
		std::vector<cv::Mat> loadImageSet();    
};

#endif
