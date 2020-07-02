#include "Tv.h"
#ifndef WIDETV_H
#define WIDETV_H

class WideTv : public Tv {
	bool videoIn;
public:
	WideTv(int size, bool videoIn) : Tv(size){
		this->videoIn = videoIn;

	}
	bool getVideoIn() { return this->videoIn; }
};

#endif
