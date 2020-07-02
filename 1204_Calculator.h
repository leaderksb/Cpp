#include "Adder.h"
#include "Subtractor.h"
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b) {
		int res = 0;
		switch (op){
		case '+':
			res = add(a, b);
			break;
		case '-':
			res = minus(a, b);
			break;
		}
		return res;
	}
};

#endif
