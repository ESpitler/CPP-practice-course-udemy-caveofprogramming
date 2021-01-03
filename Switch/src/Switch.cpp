//============================================================================
// Name        : Switch.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int value = 4;
	switch(value)
	{
	case 4:
		cout << "Value = " << value << endl;
		break;
	case 5:
		cout << "Value = " << value << endl;
		cout << "WINNER, WINNER, Chicken Dinner!" << endl;
		break;
	case 6:
		cout << "Value = " << value << endl;
		break;
	default:
		cout << "I don't know what you mean by that." << endl;
	}
	return 0;
}
