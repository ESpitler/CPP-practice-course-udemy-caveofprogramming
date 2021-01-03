/*
 * Brel.h
 *
 *  Created on: Apr 22, 2020
 *      Author: evan
 */

#ifndef BREL_H_
#define BREL_H_

class Brel {
private:
	int shipState;
				/* 0 = landed
				 * 1 = atmospheric flight
				 * 2 = orbital flight
				 * 3 = docked
				 * 4 = cruise
				 * 5 = attack
				 * */
public:
	Brel();
	bool quitGame;
	void userIn();
	void shipLogic();
	void updateShipState();
	void textOut();
	void fullStop();
	void fwd();
	void fireTorps();
	void fireDisr();
	void cloak();
	void deCloak();
	void moor();
	void aweigh();
	void land();
	void tractorBeam();
	~Brel();
};

#endif /* BREL_H_ */
