#ifndef PERSON_H
#define PERSON_H

class Person {
public:
	int money;
	void addMoney(int Money) {
		this->money = money;
	}
	static int sharedMoney; // static 멤버변수
	static void addShared(int n) {
		sharedMoney += n;
	}
};
int Person::sharedMoney = 10;

#endif
