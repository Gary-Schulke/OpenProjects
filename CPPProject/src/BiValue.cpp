/*
 * BiValue.cpp
 *
 *  Created on: May 18, 2020
 *      Author: gary
 */

#include <iostream>
#include "BiValue.h"

BiValue::BiValue() :
		first(1), second(100), name("default") {
	// TODO Auto-generated constructor stub
}

BiValue::BiValue(int f, int s, std::string str = "default") :
		first(f), second(s), name(str) {

}

BiValue::~BiValue() {
	// TODO Auto-generated destructor stub
}

BiValue::BiValue(const BiValue &other) {
	first = other.first;
	second = other.second;
	name = other.name;
}
BiValue::BiValue(BiValue &&other) {
	first = other.first;
	second = other.second;
	name = other.name;
}
BiValue& BiValue::operator=(const BiValue &other){
	first = other.first;
	second = other.second;
	name = other.name;
	return *this;
}

BiValue& BiValue::operator=(BiValue &&other){
	first = other.first;
	second = other.second;
	name = other.name;
	return *this;
}
bool BiValue::operator==(const BiValue &bv) const {
	return (this->sortValue() == bv.sortValue() && this->name == bv.name);
}

bool BiValue::operator<(const BiValue &bv) const {
	bool retVal = false;
	if (isEqual(sortValue(), bv.sortValue())) {
		retVal = name < bv.name;
	} else {
		retVal = (this->sortValue() < bv.sortValue());
	}
	return (retVal);
}

bool BiValue::operator>(const BiValue &bv) const {
	bool retVal = false;
	int l = this->sortValue();
	int r = bv.sortValue();
	if (this->isEqual(l, r)) {
		retVal = name > bv.name;
	} else {
		retVal = (l > r);
	}
	return (retVal);
}

void BiValue::print() const{
	std::cout << first << " " << second << " " << name << " " << ""
			<< std::endl;
}

int BiValue::sortValue() const {
	return (first * second);
}

int BiValue::secondarySortValue() const {
	return 0;
}

bool BiValue::isEqual(int me, int arg) const {
	return me == arg;
}
