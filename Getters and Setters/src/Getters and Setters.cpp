//============================================================================
// Name        : Getters.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;


int main() {

	Person person;

	person.setName("Trisha");

	cout << person.toString() << endl;

	cout << "Name of person with get method is " << person.getName() << endl;

	return 0;
}
