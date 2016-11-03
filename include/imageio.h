#ifndef IMAGEIO_H
#define IMAGEIO_H

class ImageContainer
{
		const string home_path = "/home/reginald/Pictures/Masters/living_room_traj0_frei_png/rgb";	
		const string hv_path = "";
		string curr_path;
		int set_size = 1509;
	public:
        vector<MAT> imageset;
		void setCurrPath(string path);
		string pathCreator(int index);
		void loadImageSet();    
}

#endif
