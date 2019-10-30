#ifndef OVAL_H
#define OVAL_H

class Oval {
private:
	int width, height;
public:
	Oval();
	Oval(int x, int y);
	void set(int n, int m);
	void show();
	int getWidth();
	int getHeight();
};

#endif
