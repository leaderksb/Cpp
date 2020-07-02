#include <iostream>
using namespace std;
#ifndef POINT_H
#define POINT_H

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

#endif
