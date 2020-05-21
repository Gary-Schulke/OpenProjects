/*
 * JustAClass.h
 *
 *  Created on: May 20, 2020
 *      Author: gary
 */

#ifndef JUSTACLASS_H_
#define JUSTACLASS_H_

class JustAClass {
public:
	JustAClass();
	virtual ~JustAClass();
	JustAClass(const JustAClass &other);
	JustAClass(JustAClass &&other);
	JustAClass& operator=(const JustAClass &other);
	JustAClass& operator=(JustAClass &&other);
};

#endif /* JUSTACLASS_H_ */
