//============================================================================
// Name        : InheritancePax.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Ship{
public:
	void shields(){
		cout << "shields holding" << endl;
	}
	void weapons(){
		cout << "weapons charged" << endl;
	}
};

class Brel: public Ship{
public:
	void cloak(){
		cout << "ship cloaking" << endl;
	}
};

class Tovadok: public Brel{
public:
	void replicators(){
		cout << "replicators are on the fritz!" << endl;
	}
};

int main() {

	Ship saratoga;
	saratoga.shields();
	saratoga.weapons();

	Brel kratak;
	kratak.cloak();
	kratak.shields();

	Tovadok tovadok;
	tovadok.replicators();
	tovadok.cloak();
	tovadok.weapons();


	return 0;
}
