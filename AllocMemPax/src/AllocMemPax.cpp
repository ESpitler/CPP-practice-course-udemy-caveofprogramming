//============================================================================
// Name        : AllocMemPax.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style

//create a class that has an instance variable of type string and a set method that lets you set that string
//and also some method that lets you output that instance variable

//allocate an array of 26 of them for each object set a name to be a string that contains a single letter of the alphabet
//
//============================================================================

#include <iostream>
using namespace std;

class Placard {
private:
	string designation;

public:
	Placard(){
		cout << "Placard Created..." << endl;

	}

	Placard(const Placard& other) :
			designation(other.designation) {
		cout << "Placard Copied..." << endl;

	}

	void setDesignation(string designation){
		this->designation = designation;

	}
	void soundOff(){
		cout << "Card Designation: " << designation << endl;
	}

	~Placard(){
		cout << "Placard Destroyed..." << endl;

	}
};


int main() {

	char c = 'a';

	Placard *pLacard = new Placard[26];

	for(int i = 0; i<26; i++, c++){
		string bux(i+1, c);
		pLacard[i].setDesignation(bux);
		pLacard[i].soundOff();
	}

	delete [] pLacard;

	return 0;
}
