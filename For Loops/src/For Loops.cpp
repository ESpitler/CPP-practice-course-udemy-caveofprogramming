//============================================================================
// Name        : For.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int i = 99;i >= 0;i--) // decrement from 99 to 0
	{
		cout << "Stage: " << i << endl; // prints stage #

		if (i == 42) // break at 42 for finding the answer
		{
			cout << "FOUND: The answer to the ultimate question of Life, The Universe, and Everything" << endl;
			continue; // the actual break
		}

		cout << "No answer found. Proceeding to next stage..." << endl;
	}

	cout << "Cycle Complete - Commencing Shutdown..." << endl;

	return 0;
}
