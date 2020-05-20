/*
 * ExternalPart.h
 *
 *  Created on: May 14, 2020
 *      Author: gary
 */

#ifndef EXTERNALPART_H_
#define EXTERNALPART_H_

#include "BodyPart.h"

class ExternalPart: private BodyPart {
public:
	ExternalPart();
	virtual ~ExternalPart();
	ExternalPart(const ExternalPart &other);
};

#endif /* EXTERNALPART_H_ */
