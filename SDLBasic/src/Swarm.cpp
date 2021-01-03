/*
 * Swarm.cpp
 *
 *  Created on: Oct 29, 2020
 *      Author: evan
 */

#include "Swarm.h"

namespace tut {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

void Swarm::update(int elapsed){

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++){
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;
}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

} /* namespace tut */
