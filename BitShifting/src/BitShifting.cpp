//============================================================================
// Name        : BitShifting.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <SDL.h>
using namespace std;

int main() {
	// 0xFF123456

	Uint32 alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;

	unsigned char color = alpha;

	color = color << 4;

	cout << setfill('0') << setw(8) << hex  << color << endl; // prints Your Mother
	return 0;
}
