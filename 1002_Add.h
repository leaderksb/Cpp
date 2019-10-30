#ifndef ADD_H
#define ADD_H

class Add {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a + b; }
};

#endif
