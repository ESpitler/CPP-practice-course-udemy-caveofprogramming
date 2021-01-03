//============================================================================
// Name        : Inheritance-Constructor-Practice.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

//establish a multi-level class hierarchy with >3 classes
//add cout text in the constructors to indicate which constructors are running
//for each level, specify which constructors will be called

#include <iostream>
using namespace std;

//Lifeforms
///Crew
////Bridge
////Warrior
////Civilian
///Animals

class Lifeforms{
private:
	int hitPoints;
	int strength;
	int intel;

public:
	Lifeforms(): hitPoints(10), strength(5), intel(5) {
		cout << "Lifeform initialized with no-argument constructor." << endl;
	}
	Lifeforms(int hitPoints, int strength, int intel): hitPoints(hitPoints), strength(strength), intel(intel) {
		cout << "Lifeform initialized with parameterized values." << endl;
	}
	void characterSheet(){
		cout << "Lifeform's stats are Hit Points: "<< hitPoints << ", Strength: " << strength << ", and Intelligence: " << intel << endl;
	}
};

class Crew: public Lifeforms{
public:
	Crew(){
		cout << "Crew initialized with no-argument constructor." << endl;
	}
	Crew(int hitPoints, int strength, int intel): Lifeforms(hitPoints, strength, intel) {
		cout << "Crew initialized with parameterized values." << endl;
	}


};

class Bridge: public Crew {
public:
	Bridge(int hitPoints, int strength, int intel): Crew(hitPoints, strength, intel) {

		cout << "Bridge Crew initialized with parameterized constructor." << endl;
	}
};



int main() {
	Lifeforms being;
	being.characterSheet();

	Lifeforms being2(8, 12, 7);
	being2.characterSheet();

	Crew recruit;
	recruit.characterSheet();

	Crew chief(15, 12, 10);
	chief.characterSheet();

	Bridge ensign(15, 10, 14);
	ensign.characterSheet();

	return 0;
}
