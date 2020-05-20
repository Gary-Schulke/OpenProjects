/*
 * BodyPart.h
 *
 *  Created on: May 14, 2020
 *      Author: gary
 */

#ifndef BODYPART_H_
#define BODYPART_H_

#include "Base.h"

class BodyPart: public Base {
public:
	BodyPart();
	virtual ~BodyPart();
	BodyPart(const BodyPart &other);
};

#endif /* BODYPART_H_ */
