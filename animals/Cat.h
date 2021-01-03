/*
 * Cat.h
 *
 *  Created on: Oct 30, 2020
 *      Author: evan
 */

#ifndef CAT_H_
#define CAT_H_

namespace tut {

void sayAnything();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

} /*namespace tut*/

#endif /* CAT_H_ */
