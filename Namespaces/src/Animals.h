/*
 * Animals.h
 *
 *  Created on: Oct 23, 2020
 *      Author: evan
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace tut {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace tut */

#endif /* ANIMALS_H_ */
