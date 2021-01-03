//============================================================================
// Name        : passwd.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string password = "blarney";
	cout << "enter password: >" << flush;
	string input;
	cin >> input;

	cout << input << endl;

	int wrongPassCounter = 0;
	if (input != password)
	{
		while (wrongPassCounter < 5)
		{
			cout << "incorrect password. Please Try again >" << flush;
			cin >> input;
			cout << input << endl;
			wrongPassCounter ++;
		}
		cout << "ACCOUNT LOCKED OUT! See administrator for further assistance." << endl;
	}
	else
		cout << "Access Granted" << endl;

		return 0;
}
