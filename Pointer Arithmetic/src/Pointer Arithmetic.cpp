//============================================================================
// Name        : Pointer.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5; //const cannot be edited by the program

				//elements 	  [0]	 [1]	[2]		 [3]	 [4]	  ["5"]-outside the array. non valid data
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	string *pTexts = texts; //assigns a string pointer to the texts array. initializes at element [0]

	pTexts += 3; //increments the pointer position by 3

	cout << *pTexts << endl; // outputs the contents of the third string position "four"

	pTexts -= 2; //decrements the pointer position by 2

	cout << *pTexts << endl; //outputs "two"

	string *pEnd = &texts[NSTRINGS]; // sets pEnd pointer to one higher than the greatest element in the array
	pTexts = &texts[0]; // resets pTexts pointer position to the address of element [0]

	while(pTexts != pEnd){ //compares pTexts position with pEnd position. loop exits when the values are the same
		cout << *pTexts << endl; //outputs the contents at the position of the pointer and makes a new line
		pTexts++; //increments the position
	}

	pTexts = &texts[0]; //sets pointer position back to [0]

	/* address locations are expressed as long integers. The relatively small distance between memory addresses between
	 * pEnd and pTexts could mistakenly be cast as an int. This variable type explicitly casts the values as long int
	 * to preserve the memory size for an address location*/
	long elements = (long)(pEnd - pTexts); //subtracts the position of pTexts from pEnd to determine the number of elements
	cout << elements << endl; //outputs the number of elements as calculated using pointer arithmetic

	pTexts = &texts[0]; //sets pointer position back to [0]

	pTexts += NSTRINGS/2; //sets pointer position to the middle element of the array (int math round down)
	cout << *pTexts << endl; //outputs the contents of middle element position

	return 0;
}
