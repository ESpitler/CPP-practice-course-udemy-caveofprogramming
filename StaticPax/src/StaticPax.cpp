//============================================================================
// Name        : StaticPax.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Registries.h"
using namespace std;

//Practice Exercises:
//Define and output a public static constant v
//Define and output a non-static field v
//Output a static field with a static method v
//Increment a static int field with postfix and prefix operators v
//Assign object ID based on static count incremented in constructor v

int main() {
	//cout << "Registration starts at NCC-" << Registries::comReg << "." << endl; // prints Your Mother

	Registries ship1("Constitution");
	cout << "The " << ship1.getShipName() << "'s Registry is NCC-" << ship1.getID() << ". "<< endl;
	Registries ship2("Enterprise");
	cout << "The " << ship2.getShipName() << "'s Registry is NCC-" << ship2.getID() << ". "<< endl;

	Registries ship3;
	ship3.setShipName();
	cout << "The " << ship3.getShipName() << "'s Registry is NCC-" << ship3.getID() << ". "<< endl;

	Registries::displayRegistry();

	return 0;
}
