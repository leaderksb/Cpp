#ifndef MUL_H
#define MUL_H

class Mul {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a * b; }
};

#endif // !Mul
