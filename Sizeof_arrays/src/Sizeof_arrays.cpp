//============================================================================
// Name        : Sizeof_arrays.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int values[]={1, 7, 0, 1};
	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;
	unsigned int numElems = sizeof(values)/sizeof(int);

	for (unsigned int i = 0; i < numElems; i++)
	{
		cout << values[i] << " " << flush;
	}
	cout << endl;
	return 0;
}
