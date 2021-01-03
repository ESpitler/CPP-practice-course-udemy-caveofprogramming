/*
 * Cat.cpp
 *
 *  Created on: Apr 22, 2020
 *      Author: evan
 */

#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if (happy) {
		cout << "Mrow? :3" << endl;
	} else {
		cout << "SSSSSSSSSS!" << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}
void Cat::makeSad(){
	happy = false;
}
