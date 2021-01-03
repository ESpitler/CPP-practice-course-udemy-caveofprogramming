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
	string name = "Bob";
	int age = 32;

	stringstream ss;

	ss << "Hi, My name is ";
	ss << name;
	ss << ", and I am ";
	ss << age;
	ss << " years old." << endl;

	cout << ss.str() << endl;


	return 0;
}
