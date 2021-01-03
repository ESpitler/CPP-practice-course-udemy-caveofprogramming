//============================================================================
// Name        : Pointers.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pValue){
	cout << "2. Double Value in the Manipulate Function = " << *pValue << endl;
	*pValue = 80.88;
	cout << "3. Double Value in the Manipulate Function = " << *pValue << endl;

}

int main() {

	int nValue = 8;

	int* pnValue = &nValue;

	cout << "Integer value = " << nValue << endl;
	cout << "Pointer to integer address -> " << pnValue << endl;
	cout << "Integer value via pointer = " << *pnValue << endl;

	cout << "==============================" << endl;

	double dValue = 123.4;

	cout << "1. dValue = " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue = " << dValue << endl;


	return 0;
}
