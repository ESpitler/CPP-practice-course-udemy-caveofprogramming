//============================================================================
// Name        : New_Keyword.cpp
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

Animal *createAnimal(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();
	pFrog->speak();

	delete pFrog;



	/*
	Animal *pCat1 = new Animal(); //establish a pointer to and manually allocate the memory for an animal object
	pCat1->setName("Freddy"); //arrow operators work in lieu of manually binding dereference to the pointer and
	pCat1->speak(); // using the object dot operator e.g. pCat1->speak() <=> (*pCat).speak()
	delete pCat1; //manually deallocates memory that was allocated using new //do not use on NULL pointers
	*/

	return 0;
}
