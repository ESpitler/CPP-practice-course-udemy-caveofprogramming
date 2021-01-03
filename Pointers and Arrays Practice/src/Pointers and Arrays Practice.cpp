//============================================================================
// Name        : Pointers.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================


/*
 * Objectives
 * loop thru an array using a pointer with ary element reference [i] [V]
 * loop thru an array by incrementing a pointer (pointer++)
 * loop thru an array by comparing two pointers
 * */
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Year One Scores!!!" << endl;
	cout << "#####################" << endl;

	int scores[] = {61, 75, 25, 81, 85, 55 , 89};
	int* pScores = scores;

	for (unsigned int i = 0; i < sizeof(scores)/sizeof(int); i++){ //i has to be an unsigned int when comparing against sizeof()
		cout << "[" << pScores[i] << "]" << flush;
	}

	cout << endl << "-" << endl;

	for (unsigned int i = 0; i < sizeof(scores)/sizeof(int); i++, pScores ++){ //i has to be an unsigned int when comparing against sizeof()
		cout << "[" << *pScores << "]" << flush;
	}

	cout << endl << "-" << endl;

	int *pStart = &scores[0];
	int *pEnd = &scores[(sizeof(scores)/sizeof(int))-1]; //ratio gives array size. last element # = array size - 1

	while(1){
		cout << "[" << *pStart << "]" << flush;
		if (pStart == pEnd) {break;}
		pStart++;
	}

	cout << endl << "...end program" << endl;

	return 0;
}
