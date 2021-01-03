//============================================================================
// Name        : Reversing.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char nameIs[] = "Racecar"; //defines the string of text to reverse

	int nChars = sizeof(nameIs) - 1; //counts the characters in the array, less the null terminal

	char *pStart = nameIs; //defines the starting location of the array
	char *pEnd = nameIs + nChars - 1; //adds the number of characters to the starting position, not counting the starting position itself

	//cout << *pEnd << endl; //test prints the last character to verify the correct end location

	while(pStart < pEnd) { //loop to swap the first and last character, then move in toward the center of the array

		char save = *pStart; //temporarily hold the first character
		*pStart = *pEnd; //overwrite the first character with the last character
		*pEnd = save; //replace the last character with the original first character

		pStart++; //increment to the next character in the array
		pEnd--; //decrement to the next-to-last character in the array
	}

	cout << nameIs << endl; //print the resulting reversal of the array

	return 0;
}
