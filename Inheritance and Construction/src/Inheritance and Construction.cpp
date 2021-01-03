//============================================================================
// Name        : Inheritance.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

//constructors are not inherited by subclasses, but they are called

//establish a multi-level class hierarchy with >3 classes
//add cout text in the constructors to indicate which constructors are running
//for each level, specify which constructors will be called

#include <iostream>
using namespace std;

class Machine{
private:
	int id;

public:
	Machine(): id(0) {
		cout << "Machine no-argument constructor called." << endl;
	}
	Machine(int id): id(id) {
		cout << "Machine parameterized constructor called." << endl;
	}
	void info(){
		cout << "ID: " << id << endl;
	}
};

class Vehicle: public Machine{
public:
	Vehicle() {
		cout << "Vehicle no-argument constructor called." << endl;
	}
	Vehicle(int id): Machine(id) {
		cout << "Vehicle parameterized constructor called." << endl;
	}
};

class Car: public Vehicle {
public:
	Car(): Vehicle(999) {
		cout << "Car no-argument constructor called." << endl;
	}
};

int main(){

	Vehicle derp(1701);
	derp.info();

	Car car;
	car.info();

	return 0;
}
