//============================================================================
// Name        : Variables.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int numCats = 3; // number of cats.
	int numDogs = 8; // number of dogs.
	int numAnim = numCats + numDogs;

	cout << "I have " << numCats << " cats, and " << endl;
	cout << "I have " << numDogs << " dogs." << endl;

	cout << "Therefore, I have a total of " << numAnim << " animals." << endl;
	numDogs ++;

	cout << "Hey! I just got another dog! Now I have " << numDogs << " dogs, and " << numCats + numDogs << " animals." << endl;

	return 0;
}
