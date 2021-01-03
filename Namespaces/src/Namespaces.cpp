//============================================================================
// Name        : Namespaces.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"


using namespace std;
using namespace tut;//before using a custom namespace make sure the file that refers to it is included above.


int main() {

	Cat cat;
	cat.speak();

	cats::Cat cat2;
	cat2.speak();

	tut::Cat cat3;
	cat3.speak();

	cout << tut::CATNAME << endl;
	cout << cats::CATNAME << endl;
	cout << CATNAME << endl;

	return 0;
}
