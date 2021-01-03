/*
 * Registries.cpp
 *
 *  Created on: Oct 27, 2020
 *      Author: evan
 */

#include "Registries.h"
#include <sstream>

int Registries::comReg = 1700;//must be initialized outside of the class

Registries::Registries() {
	shipReg = comReg++;

}

Registries::Registries(string shipName) {
	this->shipName = shipName;
	shipReg = comReg++;

}

int Registries::getID(){
	return shipReg;
}

string Registries::getShipName(){

	stringstream ss;

	ss << "USS ";
	ss << shipName;

	return ss.str();
}

void Registries::setShipName(){
	cout << "What is this ship called? " << flush;
	cin >> shipName;
	this->shipName = shipName;
}

void Registries::displayRegistry(){
	cout << "The common registry is up to " << comReg << endl;
}

//Registries::~Registries() {
	// TODO Auto-generated destructor stub
//}

