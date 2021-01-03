//============================================================================
// Name        : Char.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	for(int i = 0; i<sizeof(text); i++){
		cout << i << ": " << text[i] << endl;
	}

	return 0;
}
