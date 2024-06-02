#include <iostream>
#include <vector>
using namespace std;

__interface IMeal {
public:
	virtual void GetMeal() = 0;
};

class Breakfast : public IMeal {
public:
	void GetMeal() {
		cout << "Breakfast\n";
	}
};

class Lunch : public IMeal {
public:
	void GetMeal() {
		cout << "Lunch\n";
	}
};

class Dinner : public IMeal {
public:
	void GetMeal() {
		cout << "Dinner\n";
	}
};

class Dish abstract {
protected:
	IMeal* meal = nullptr;
public:
	virtual void ShowMeal() = 0;
};

class Omelette : public Dish {
public:
	Omelette() {
		meal = new Breakfast;
	}
	void ShowMeal() {
		cout << "Omelette\n";
	}
};

class Dumplings : public Dish {
public:
	Dumplings() {
		meal = new Lunch;
	}
	void ShowMeal() {
		cout << "Dumplings\n";
	}
};

class Pasta : public Dish {
public:
	Pasta() {
		meal = new Dinner;
	}
	void ShowMeal() {
		cout << "Pasta\n";
	}
};

int main() {
	Dish* dish = new Pasta;
	dish->ShowMeal();
	delete dish;

	dish = new Omelette;
	dish->ShowMeal();
	delete dish;

	dish = new Dumplings;
	dish->ShowMeal();
	delete dish;
}