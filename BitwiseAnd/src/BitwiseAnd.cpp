//============================================================================
// Name        : BitwiseAnd.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int color = 0x123456FF;

	unsigned char red = (color & 0xFF000000) >> 24;
	unsigned char green = (color & 0x00FF0000) >> 16;
	unsigned char blue = (color & 0x0000FF00) >> 8;

	//mask	1111 1111 0000 0000 0000 0000
	//color	0001 0010 0011 0100 0101 0110
	//bit&	0001 0010 0000 0000 0000 0000 0x120000
	//		   8	B	 D	  E	   F	D sort of a sky bluish
	//color 1000 1011 1101 1110 1111 1011
	cout << hex << (int)red << endl;
	cout << hex << (int)green << endl;
	cout << hex << (int)blue << endl;

	unsigned char redAgain = color >> 24;
	unsigned char greenAgain = color >> 16;
	unsigned char blueAgain = color  >> 8;
	cout << hex << (int)redAgain << endl;
	cout << hex << (int)greenAgain << endl;
	cout << hex << (int)blueAgain << endl;

	return 0;
}
