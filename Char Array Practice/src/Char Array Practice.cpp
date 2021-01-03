//============================================================================
// Name        : Char.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//objectives:
//Create a char string and output it
//Output all the chars with a for loop
//Output all the chars with a while(true) loop

int main() {

	char nameIs[] = "Tesla";

	cout << "Printing name via Char String: " << nameIs << endl;

	for (int i = 0; i < sizeof(nameIs); i++){
		cout << i << ": " << nameIs[i] << endl;
	}

	int k = 0;

	while(1){
		if(nameIs[k]==0)
			break;
	cout << nameIs[k] << flush;

	k++;
	}


	return 0;
}
