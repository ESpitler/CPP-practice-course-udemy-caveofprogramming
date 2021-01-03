//============================================================================
// Name        : String.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {

	stringstream ss;
	stringstream sa;

	cout << "I'm here to add some things. What's your name?" << endl;
	cout << "> ";
	string urName;
	cin >> urName;
	cout << "Hi, " << urName << ", my name is Needles. How old are you?" << endl;
	cout << "> ";
	int urAge;
	cin >> urAge;

	ss << "so let's see if I have this right. Your name is ";
	ss << urName;
	ss << ", and you are presently ";
	ss << urAge;
	ss << " years old" << endl;

	cout << ss.str() << endl;

	cout << "Okay, What is your brother's name? " << endl;
	cout << "> ";
	string broName;
	cin >> broName;
	cout << "...And how old is " << broName << "?" << endl;
	int broAge;
	cin >> broAge;

	int combAge = urAge + broAge;

	sa << "so, ";
	sa << urName;
	sa << ", you are ";
	sa << urAge;
	sa << " years old, and your brother, ";
	sa << broName;
	sa << ", is ";
	sa << broAge;
	sa << " years old. So your combined age is ";
	sa << combAge << endl;

	cout << sa.str() << endl;

	return 0;
}
