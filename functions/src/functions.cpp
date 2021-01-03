//============================================================================
// Name        : functions.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream> //include input output stream
using namespace std; //using the standard namespace

void showMenu() { //function to display the menu options
	cout << "1. Search" << endl; //option 1
	cout << "2. View Record" << endl; //option 2
	cout << "3. Quit" << endl; // option 3
}

int getInput() { //function to get input from user using cin command
	cout << "Enter Selection" << endl; // displays a command to enter selection
	int input; //initialize an integer variable to receive the input
	cin >> input; //receive input from user

	return input; //returns the input value
}
void processSelection(int option) // function to process the switch mechanism
{
	switch (option) { //option is the input value obtained from the getInput function
		case 1:											//case behaviors
			cout << "Searching..." << endl;				//display results of selection
			break;										//end behavior and return from switch mechanism
		case 2:
			cout << "Displaying Record..." << endl;
			break;
		case 3:
			cout << "Quitting..." << endl;
			break;
		default:
			cout << "Error: Unknown Command" << endl;
			break;
		}
}
int main() {	//the bizznizz

	showMenu(); //display menu function
	int selection = getInput(); //set selection variable to receive the return value from the getInput function (input)
	processSelection(selection); //pass selection value to the process selection function

	return 0; //return zero because our main function is an integer and demands some return value
	}
