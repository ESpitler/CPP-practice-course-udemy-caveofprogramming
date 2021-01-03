//============================================================================
// Name        : Copy.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal(){cout << "Animal created." << endl; };//default constructor
	Animal(const Animal& other): name(other.name) {cout << "Animal created using copy constructor." << endl;}; //explicitly defined copy constructor using initialization list for defining variables
	void setName(string name){this->name = name; }; //setter
	void speak() const {cout << "My name is " << name << endl; }; //getter
};

//try to define a class with two private variables using the copy constructor

int main() {

	Animal animal1;

	animal1.setName("Steve");

	Animal animal2 = animal1; //the '=' operator implicitly invokes the copy constructor
	animal2.speak();
	animal2.setName("Arnlo");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1); //directly invokes the copy constructor
	animal3.speak();

	return 0;
}
