//============================================================================
// Name        : Input.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hey! What's your name? " << flush;
	string input;
	cin >> input;
	cout << "Hi, " << input << "! My name's Needles. It's nice to meet you." << endl;

	cout << "How old are you? " << flush;
	int age;
	cin >> age;
	cout << "ew, you're " << age << "?! That's old lol." << endl;
	return 0;
}
