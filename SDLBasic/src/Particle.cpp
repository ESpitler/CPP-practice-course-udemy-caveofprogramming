/*
 * Particle.cpp
 *
 *  Created on: Oct 29, 2020
 *      Author: evan
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace tut {

Particle::Particle():
		m_x(0), m_y(0) {

	init();
	//m_x = (2.0 * rand()) / RAND_MAX - 1;//initialize to a random value on the screen x, and
	//m_y = (2.0 * rand()) / RAND_MAX - 1;//y. (not used because we want to init from the center using the initialization lists)

	//m_xSpeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1); //random speed used in square expansion
	//m_ySpeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);

}

void Particle::init(){
	m_x = 0;
	m_y = 0;
	m_direction = (2* M_PI * rand())/RAND_MAX;
	m_speed = (0.04 * rand())/RAND_MAX;
	m_speed *= m_speed;
}

void Particle::update(int interval) {

	m_direction += interval*0.0004;

	double xSpeed = m_speed * cos(m_direction);
	double ySpeed = m_speed * sin(m_direction);

	m_x += xSpeed * interval;
	m_y += ySpeed * interval;

	if(m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1){
		init();
	}

	if(rand() < RAND_MAX/100){
		init();
	}

/*	m_x += m_xSpeed; //not used because this makes a square expansion, we are going for a radial expansion
	m_y += m_ySpeed;

	if (m_x <= -1.0 || m_x >= 1.0) {
		m_xSpeed = -m_xSpeed;
	}
	if (m_y <= -1.0 || m_y >= 1.0) {
		m_ySpeed = -m_ySpeed;
	}*/
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace tut */
