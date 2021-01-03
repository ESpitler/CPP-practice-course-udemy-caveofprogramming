//============================================================================
// Name        : If.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// write a simple unhashed password discriminator
int main()
{
	string password = "fukaduk";
	cout << "what's da passwoid? >" << flush;

	string input;
	cin >> input;

	cout << "'" << input << "'" << endl;

	if(input == "fukaduk")
	{
		cout << "c'mon in! make yerself at home" << endl;
	}
	else cout << "BZZZZZZZT, guess again, zero cool!" << endl;
	return 0;
}
