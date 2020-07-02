#include <string>
#include "WideTv.h"
using namespace std;
#ifndef SMARTTV_H
#define SMARTTV_H

class SmartTv : public WideTv {
	string ipAddr;
public:
	SmartTv(string ipAddr, int size) : WideTv(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return this->ipAddr; }
};

#endif
