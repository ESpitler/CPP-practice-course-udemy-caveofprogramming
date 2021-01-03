//============================================================================
// Name        : Sizeof_multidimensional_arrays.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	unsigned int rows;
	unsigned int cols;
	string chInventory[][5]=
	{
			{"Rapier", "Short Sword", "Elven Armor", "Dagger", "Dagger"},
			{"Calligrapher's Tools", "Thieve's Tools", "Iron Pot", "Shovel", "Burgaler's Pack"},
			{"String", "Knucklebone Dice", "Crowbar", "Lantern", "Bell"},
	};

	cout << "Your current inventory:" << endl;
	cout << "=======================" << endl;

	rows = (sizeof(chInventory)/sizeof(chInventory[0]));
	cout << rows << endl;
	cols = sizeof(chInventory[0])/sizeof(string);
	cout << cols << endl;


	for (unsigned int i = 0; i < rows; i++)
	{
		for(unsigned int j = 0; j < cols; j++)
		{
			cout << chInventory[i][j] << ", " << flush;
		}
		cout << endl;
	}
	return 0;
}
