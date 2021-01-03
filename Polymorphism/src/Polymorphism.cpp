//============================================================================
// Name        : Polymorphism.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//try practicing with references rather than pointers

class Animal{
public:
	//virtual void speak(){ //use the virtual keyword for methods that may be overwritten by subclasses
	//	cout << "????????"<< endl; this implementation of the speak method uses a dummy method that will
	//}  be overwritten. a virtual method is preferred in this case

	virtual void speak()=0;//value is set to null. Method MUST be overwritten by a subclass.

	virtual ~Animal(){};
};

class Cat: public Animal {
public:
	virtual void speak(){
		cout << "RRRrRrRrRR"<< endl;
	}

	virtual ~Cat(){};
};

class HouseCat: public Cat {
public:
	virtual void speak(){
		cout << "Meoww :3"<< endl;
	}

	virtual ~HouseCat(){};
};

int main() {

	Animal *pAnimal = new HouseCat; //pointers to a base class may refer to a subclass if the overwritten method is made virtual

	pAnimal->speak();

	delete pAnimal;

	return 0;
}
