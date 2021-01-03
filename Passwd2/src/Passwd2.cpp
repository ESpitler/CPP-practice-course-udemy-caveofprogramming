//============================================================================
// Name        : Passwd2.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const string password = "word!";

	string input;
	int wrongPassCounter = 0;
	do {
		cout << "Enter Password >" << flush;
		cin >> input;


		if (input != password) {
			cout << "Password Incorrect. Access Denied." << endl;
			wrongPassCounter ++;
			//cout << wrongPassCounter << endl;
		}
		if (wrongPassCounter > 2)
		{
			cout << "Too many attempts. System Locked. See administrator for help. " << endl;
			break;
		}
	} while ( input != password);

	if(input == password)
	{
		cout << "Access Granted" << endl;
	}

	return 0;
}
