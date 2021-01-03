//============================================================================
// Name        : Arithmetic.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================
/*objectives:
 *	take a large number of seconds and convert to Days, Hours, Mins, Secs
 *	Write a loop that iterates 10,000 times and place a dot for every 100
*/
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * */
void timeCalc(){
	int progTime = 0;
	cout << "Enter Time Interval." << endl;
	cout << "> ";
	cin >> progTime;

	int disSecs = progTime % 60;
	int progMins = progTime / 60;
	int disMins = progTime % 60;
	int disHours = progMins / 60;

//	cout << "Input time = " << progTime << "seconds." << endl;
//	cout << "Display seconds = " << disSecs << endl;
//	cout << "Program minutes = " << progMins << endl;
//	cout << "Display minutes = " << disMins << endl;
//	cout << "Display hours = " << disHours << endl;

	cout << "Display Time: "
			<< std::setfill('0') //sets zero to be the leading char
			<< std::setw(2) // formats character width to two
			<< disHours
			<< ":"
			<< std::setfill('0')
			<< std::setw(2)
			<< disMins
			<< ":"
			<< std::setfill('0')
			<< std::setw(2)
			<< disSecs
			<< endl;
}

void dotter(){
	for (int i = 0; i < 10000; i++) {
		//cout << i << endl;
		if(((i + 1) % 100) == 0){
			cout << "." << endl;
		}
	}
	cout << "Program Complete." << endl;
}


int main() {

	int slct;
	cout << "Choose function:" << endl;
	cout << "1.) Time Calculator " << endl;
	cout << "2.) Dot Function " << endl;
	cout << "> ";
	cin >> slct;

	switch (slct){
	case 1:
		timeCalc();
		break;
	case 2:
		dotter();
		break;
	default:
		cout << "Bad choice, buddy!" << endl;
		break;
	}

	return 0;
}
