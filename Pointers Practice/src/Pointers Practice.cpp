//============================================================================
// Name        : Pointers.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void funkyTownFunction(double *pJunk){
	*pJunk = 15.21;
	cout << "The value of the junk double = " << *pJunk << endl;

}

int main() {

	int stuff = 15;

	int* pstuff = &stuff;

	cout << "The value of the stuff integer is " << stuff << endl;
	cout << "The address of the stuff integer is " << pstuff << endl;
	cout << "The contents of the variable at this address is " << *pstuff << endl << endl;
	cout << "########################################################" << endl << endl;

	double dJunk = 7.5;
	funkyTownFunction(&dJunk);
	cout << "The value of the dJunk varable is " << dJunk << endl;

	return 0;
}
