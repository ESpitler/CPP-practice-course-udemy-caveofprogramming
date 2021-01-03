//============================================================================
// Name        : Constructors.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Cat.h"

using namespace std;

int main() {

	cout << "Starting Program ..." << endl;

	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending Program ..." << endl;
	return 0;
}
