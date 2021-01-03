/*
 * Particle.h
 *
 *  Created on: Oct 29, 2020
 *      Author: evan
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace tut {

struct Particle {
	double m_x;
	double m_y;

	//double m_xSpeed; //use for cartesian initialization
	//double m_ySpeed; //makes a square
private:
	double m_speed; //use vector for polar initialization
	double m_direction; //0-360 degrees

private:
	void init();


public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace tut */

#endif /* PARTICLE_H_ */
