/*
 * Swarm.h
 *
 *  Created on: Oct 29, 2020
 *      Author: evan
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace tut {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle * m_pParticles;
	int lastTime;
public:
	Swarm();
	void update(int elapsed);
	virtual ~Swarm();

	const Particle * const getParticles(){ return m_pParticles; }
};

} /* namespace tut */

#endif /* SWARM_H_ */
