/*
 * Base.h
 *
 *  Created on: May 14, 2020
 *      Author: gary
 */
#include <iostream>
#ifndef BASE_H_
#define BASE_H_

class Base {
public:
	Base();
	virtual ~Base();
	Base(const Base &other);
	virtual std::string print();
protected:


private:
};

#endif /* BASE_H_ */
