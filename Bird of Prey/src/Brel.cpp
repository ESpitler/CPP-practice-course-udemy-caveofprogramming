/*
 * Brel.cpp
 *
 *  Created on: Apr 22, 2020
 *      Author: evan
 */
#include <iostream>

#include "Brel.h"

using namespace std;

Brel::Brel()
{
	cout<< "Ships Systems Initialized." << endl;
	shipState = 0;
	quitGame = false;
}

void Brel::userIn() {
}
void Brel::updateShipState() {
	switch(shipState)
	{
	case 0: //landed
		cout << "Helm: The ship is landed. What are your orders, Captain?" << endl << endl;
		cout << "1) Liftoff" << endl;
		cout << "2) Disembark" << endl;
		int order;
		cin >> order;
		switch (order)
		{
		case 1:
			cout << "Helm: Yes Sir! Preparing for liftoff" << endl;
			cout << "Helm: Altitude rising, Captain. " << endl;
			shipState = 1;
			break;
		case 2:
			cout << "Helm: Qa'pla!" << endl;
			quitGame = true;
			break;
		default:
			cout << "Captain, I do not understand. What are your orders?" << endl;
			shipState = 0;
			break;
		}
		break;
	case 1: //atmospheric flight
		cout << "Helm: Engaging in atmospheric flight."<< endl;
		cout << "Helm: Select Destination." << endl;
		cout << "1) Land" << endl;
		cout << "2) Attack" << endl;
		cout << "3) Change Location" << endl;
		cout << "4) Orbit" << endl;
		int atmoOrder;
		cin >> atmoOrder;
		switch (atmoOrder)
		{
		case 1:
			cout << "Helm: Preparing for landing." << endl;
			shipState = 0;
			break;
		case 2:
			cout << "Tactical: Changing to Attack Mode." << endl;
			cout << "Tactical: Charging Disruptors and Photon Torpedos." << endl;
			cout << "Tactical: Raising forward shields." << endl;
			shipState = 5;

			break;
		case 3:
			cout << "Helm: This is the only site available on this planet, Captain" << endl;
			cout << "Helm: what are your orders?" << endl;
			shipState = 1;
			break;
		case 4:
			cout << "Helm: Increasing altitude. Preparing to enter orbit." << endl;
			shipState = 2;
			break;
		default:
			break;

		}

		break;
	case 2: //orbit
		/* space station
		 * interplanetary navigation
		 * interstellar navigation
		 * enter atmosphere
		 * */
		break;
	case 3: //docked
		//do stuff
		break;
	case 4: //cruise
		//do stuff
		break;
	case 5: //attack
		/* record current mode (atmo,orbit,cruise)
		 * number of viable targets
		 * select target
		 * select weapon
		 * fire
		 * raise/lower shields
		 * beam supplies
		 * disengage and return to previous mode
		 * */
		break;
	default:
		//do stuff
		break;
	}
}
void Brel::shipLogic() {
}
void Brel::textOut() {

}
void Brel::fullStop() {
	cout << "Helm: Velocity reading zero, Captain." << endl;
}

void Brel::fwd() {
	cout << "Helm: Velocity ahead- one quarter impulse, Captain." << endl;
}
Brel::~Brel()
{}
