//============================================================================
// Name        : Break_Continue.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
	// break example
	for(int i = 0; i<5; i++)
	{
		cout << "i = " << i << endl;
		if(i==3){
			break;
		}
		cout << "Looping..." << endl;

	}
	cout << "Program Quitting..." << endl;
	*

	for(int i = 0; i<5; i++)
	{
		cout << "i = " << i << endl;
		if(i==3){
			continue;
		}
		cout << "Looping..." << endl;

	}
	cout << "Program Quitting..." << endl;


	*/
	const string password = "word!";

		string input;
		int wrongPassCounter = 0;
		do {
			cout << "Enter Password >" << flush;
			cin >> input;


			if (input == password) {
				cout << "Access Granted" << endl;
				break;								//no good use of continue in this application
				//cout << wrongPassCounter << endl;
			}

			else wrongPassCounter ++;
			if (wrongPassCounter > 2)
			{
				cout << "Too many attempts. System Locked. See administrator for help. " << endl;
				break;
			}
		} while (1);
		cout << "Some important words should go here." << endl;

	return 0;
}
