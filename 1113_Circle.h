#include <iostream>
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	int radius;
public :
	Circle(Circle& c) {
		this->radius = c.getRadius();
		cout << "복사 생성자 실행 radius = " << radius << endl; }
	Circle() { radius = 1;
	cout << "생성자 실행 radius = " << radius << endl; }
	Circle(int radius) { this->radius = radius; 
	cout << "생성자 실행 radius = " << this->radius << endl; }
	~Circle() {
		cout << "소멸자 실행 radius = " << radius << endl; }

	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
	int getRadius() { return this->radius; }
};
#endif
