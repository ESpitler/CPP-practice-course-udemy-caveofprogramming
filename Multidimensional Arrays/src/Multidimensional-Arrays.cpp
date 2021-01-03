/*
 * Multidimensional-Arrays.cpp
 *
 *  Created on: Apr 21, 2020
 *      Author: evan
 */


#include <iostream>
using namespace std;


int main()
{
	int rows = 0;
	int cols = 0;
	cout << "How many rows would you like?" << endl;
	cin >> rows;
	cout << "okay, "<< rows << " rows, and how many columns would you like?" << endl;
	cin >> cols;
	cout << "alright, " << cols << " columns."<< endl;
	int mults [rows][cols];
	for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				mults[i][j] = (i+1) * (j+1);
			}
			cout << endl;
		}

	cout << "Multiplication Table " << rows << " x " << cols<< endl;
	cout << "============================" << endl << endl;
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << mults[i][j] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}

