//============================================================================
// Name        : Inheritance.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak(){
		cout << "grr" << endl;
	}
};

class Cat: public Animal {
public:
	void jump(){
		cout << "cat jumping" << endl;
	}
};

class Tiger: public Cat {
public:
	void attackAntelope(){
		cout << "attacking" << endl;
	}
};

int main() {

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attackAntelope();

	return 0;
}
