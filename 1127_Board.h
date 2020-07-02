#include <string>
using namespace std;
#ifndef BOARD_H
#define BOARD_H

class Board {
	static int size;
	static string text[100];
public:
	static void add(string msg);
	static void print();
};

#endif
