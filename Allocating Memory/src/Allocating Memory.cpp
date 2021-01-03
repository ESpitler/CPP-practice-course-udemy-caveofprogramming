//============================================================================
// Name        : Allocating.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================


//create a class that has an instance variable of type string and a set method that lets you set that string
//and also some method that lets you output that instance variable

//allocate an array of 26 of them for each object set a name to be a string that contains a single letter of the alphabet
//
#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal(){
		cout << "Animal created..." << endl;
	}

	Animal(const Animal& other) :
			name (other.name) {
		cout << "Animal created using copy constructor..." << endl;

	}

	~Animal(){
		cout << "Destructor Called..." << endl;
	}

	void setName(string name){
		this->name = name;
	}

	void speak() const {
		cout << "My name is " << name << endl;
	}
};

int main() {

	/*
	int *pInt = new int; //allocates memory for the int primitive

	*pInt = 8;
	cout << *pInt << endl;

	delete pInt; //don't forget to delete your news
	*/


	Animal *pAnimal = new Animal[10]; //allocates memory for an array of Animal objects

	pAnimal[5].setName("Ralph");
	pAnimal[5].speak();

	delete [] pAnimal; //square brackets required to delete entire array, not just a single objects

	//char *pMem = new char[1000];
	//delete [] pMem;

	char c = 'a';
	c++;
	string bux(5, c);
	cout << bux << endl;

	return 0;
}
