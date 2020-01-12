#include <iostream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person {
	char* name;
	int id;
public:
	Person(Person& p);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

#endif
