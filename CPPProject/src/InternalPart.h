/*
 * InternalPart.h
 *
 *  Created on: May 14, 2020
 *      Author: gary
 */

#ifndef INTERNALPART_H_
#define INTERNALPART_H_

#include "BodyPart.h"

class InternalPart: private BodyPart {
public:
	InternalPart();
	virtual ~InternalPart();
	InternalPart(const InternalPart &other);
};

#endif /* INTERNALPART_H_ */
