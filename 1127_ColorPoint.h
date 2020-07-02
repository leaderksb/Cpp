#include <string>
#include "Point.h"
using namespace std;
#ifndef COLORPOINT_H
#define COLORPOINT_H

class ColorPoint : public Point{
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint(){
		cout << color << ":";
		showPoint();
	}
};

#endif
