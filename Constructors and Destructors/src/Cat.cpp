/*
 * Cat.cpp
 *
 *  Created on: Apr 22, 2020
 *      Author: evan
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
	cout<< "Cat class created..." << endl;

	happy = true;
}
Cat::~Cat(){
	cout << "Cat class destroyed" << endl;
}
void Cat::speak() {
	if (happy) {
		cout << "Mrow? :3" << endl;
	} else {
		cout << "hssssss" << endl;
	}
}

