//============================================================================
// Name        : Static.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

//Practice Exercises:
//Define and output a public static constant
//Define and output a non-static field
//Output a static field with a static method
//Increment a static int field with postfix and prefix operators
//Assign object ID based on static count incremented in constructor

#include <iostream>
using namespace std;


//typically found in a .h file
class Test {
private:
	int id;
	static int count; //static makes the variable available to all objects of this class

public:

	Test(){
		id = count++;
	}

	int getId(){
		return id;
	}
	static int const MAX = 99; //constants require an initializing value when declared
	static void showInfo(){
		cout << count << endl;
	}
};

//this would typically be found in the .cpp file for the class
int Test::count = 0;

int main() {

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object1 ID: " << test1.getId() << endl;

	Test test2;
	cout << "Object2 ID: " << test2.getId() << endl;

	Test::showInfo();


	return 0;
}
