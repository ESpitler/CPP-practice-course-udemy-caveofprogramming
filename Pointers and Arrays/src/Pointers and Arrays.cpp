//============================================================================
// Name        : Pointers.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"one", "tahooo", "thureeeh"};

	string *pTexts = texts;

	for (unsigned int i = 0; i < (sizeof(texts)/sizeof(string)); i++){
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (unsigned int i = 0; i < (sizeof(texts)/sizeof(string)); i++, pTexts ++){
		cout << *pTexts << " " << flush;

	}

	cout << endl;


	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(1){
		cout << *pElement << " " << flush;


		if (pElement == pEnd){
			break;
		}
		pElement ++;

	}


	return 0;
}
