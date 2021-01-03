//============================================================================
// Name        : CopyConstructorsPractice.cpp
// Author      : Evan
// Version     :
// Copyright   : cc by 4.0
// Description : Hello World in C++, Ansi-style
//============================================================================

//try to define a class with two private variables using the copy constructor

#include <iostream>
using namespace std;

class Crew{
private:
	string name;
	string station;

public:
	Crew (){cout << "new crewman inbound." << endl;};
	Crew (const Crew& other): name(other.name), station(other.station) {cout << "copy crewman inbound." << endl;};
	Crew (string desig, string posit){name = desig, station = posit, cout << "overload crewman inbound" << endl;};
	void setName(string name){this->name = name; }; //setter
	void takeStation(string station){this->station = station; }; //setter
	void reportForDuty() const {cout << "[" << station << "]: Crewman " << name << ", Reporting for duty!" << endl; }; //getter
};

int main() {
	Crew temok;
	temok.setName("Temok");
	temok.takeStation("Helm");
	temok.reportForDuty();

	Crew totek = temok;
	//totek.reportForDuty();

	totek.setName("Totek");
	totek.takeStation("Engineering");
	totek.reportForDuty();

	Crew kovoth(totek);
	kovoth.setName("Kovoth");
	kovoth.takeStation("Tactical");
	kovoth.reportForDuty();

	Crew tkor("T'Kor", "Science");
	tkor.reportForDuty();
	return 0;
}
