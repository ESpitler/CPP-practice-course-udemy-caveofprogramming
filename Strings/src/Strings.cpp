//============================================================================
// Name        : Strings.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string greeting = "Hello ";
	string usrName = "Izzy";
	string textLine = greeting + usrName;
	cout << greeting << usrName << "."<< endl;
	cout << textLine << "." << endl;
	return 0;
}
