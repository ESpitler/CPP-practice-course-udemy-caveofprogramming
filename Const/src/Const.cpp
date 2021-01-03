//============================================================================
// Name        : Const.cpp
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
	void setName(string name){this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; }
};


// declare your own constants, verify you can't change them
// create a constant method and verify you can't change instance variables
// declare a pointer to something that's constant
// declare a constant pointer to something
// declare a constant pointer to something that's constant

int main() {
	const double PI = 3.141592;

	cout << PI << endl;

	Animal animal;
	animal.setName("Tesla");
	animal.speak();

	int value = 8;
	int *pValue = &value; //can't change the position
	//const int *pValue = &value; //can't change the value

	//cons int * const pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	pValue = &number; //int * const pValue = &value; creates an error here

	*pValue = 12; // const int *pValue = &value; creates an error here

	cout << number << endl;

	return 0;
}
