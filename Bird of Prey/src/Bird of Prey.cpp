//============================================================================
// Name        : Bird.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include"Brel.h"

using namespace std;

int main() {
	Brel tovadok;
	while(1){//replace the 1 with a dependency on the quitGame condition
		tovadok.updateShipState();
	}

	tovadok.shipLogic();
	tovadok.textOut();

	cout << "Computer, end program." << endl;

	return 0;
}
