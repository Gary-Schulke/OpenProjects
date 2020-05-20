/*
 * Base.cpp
 *
 *  Created on: May 14, 2020
 *      Author: gary
 */


#include "Base.h"
#include <iostream>
using namespace std;

Base::Base() {
	// TODO Auto-generated constructor stub

}

Base::~Base() {
	cout << "Base Destructor" << endl;
}

Base::Base(const Base &other) {
	// TODO Auto-generated constructor stub

}

string Base::print() {
	std::cout << "class Base" << std::endl;
	return string("class Base");
}
