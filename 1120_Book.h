#include <iostream>
#ifndef BOOK_H
#define BOOK_H
using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(Book& c);
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() {
		cout << title << ", " << price << "원" << endl;
	}
};

#endif
