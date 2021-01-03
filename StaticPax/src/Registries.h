/*
 * Registries.h
 *
 *  Created on: Oct 27, 2020
 *      Author: evan
 */

#ifndef REGISTRIES_H_
#define REGISTRIES_H_

#include <iostream>
using namespace std;

class Registries {
private:
	static int comReg;
	int shipReg;
	string shipName;


public:
	Registries();
	Registries(string shipName);

	static void displayRegistry();

	int getID();
	string getShipName();
	void setShipName();




	//virtual ~Registries();
};

#endif /* REGISTRIES_H_ */
