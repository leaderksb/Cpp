#ifndef COFFEEMACHINE_H //전처리 작업
#define COFFEEMACHINE_H

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void show();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};

#endif;
