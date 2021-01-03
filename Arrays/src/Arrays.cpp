//============================================================================
// Name        : Arrays.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array of Integers" << endl;
	cout << "=================" << endl;

	int val[3];

	val[0]= 648;
	val[1]= 48;
	val[2]= 21;

	cout<< val[0] << endl;
	cout<< val[1] << endl;
	cout<< val[2] << endl;

	cout << endl << "Array of Doubles" << endl;
			cout << "================" << endl;

	double pointies[4] = {6.225, 48.5, 0.79, 5.2};

	for (int i = 0; i < 4; i++)
	{
		cout<< "Element at index "<< i << ": = "<< pointies[i] << endl;
	}

	cout << endl << "Initialize with Zeros" << endl;
			cout << "=====================" << endl;

		int initZer[8]={};

		for (int i = 0; i < 8; i++)
			{
				cout<< "Element at index "<< i << ": = "<< initZer[i] << endl;
			}
	cout << endl << "Array of Strings" << endl;
			cout << "================" << endl;

	string animals [] = {"cat", "dog", "monkey", "tardigrade", "trilobite"};
	for (int i = 0; i < 5; i++)
				{
					cout<< "Element at index "<< i << ": = "<< animals[i] << endl;
				}

	cout << endl << "Dozens" << endl;
			cout << "======" << endl;

		int doZer [13];
		for (int i = 0; i < 13; i++)
		{
			doZer[i]=i;
		}

		for (int i = 0; i < 13; i++)
		{
			cout<< "12 x "<< i << " = "<< 12*doZer[i] << endl;
		}

	return 0;
}
