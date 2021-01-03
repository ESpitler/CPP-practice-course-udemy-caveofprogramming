/*
 * Cat.cpp
 *
 *  Created on: Oct 30, 2020
 *      Author: evan
 */

#include "Cat.h"

#include <iostream>
//using namespace std; //don't use this whole-ass namespace

namespace tut {

void sayAnything(){
	std::cout << "in your eyes..." << std::endl;// use prefix implementors std::
}

Cat::Cat() {
	// TODO Auto-generated constructor stub

}

void Cat::speak(){
	std::cout << "meow" << std::endl;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

} /*namespace tut*/
