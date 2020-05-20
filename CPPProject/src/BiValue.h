/*
 * BiValue.h
 *
 *  Created on: May 18, 2020
 *      Author: gary
 */
#include <string>
#ifndef BIVALUE_H_
#define BIVALUE_H_


class BiValue {
public:
	BiValue();
	BiValue(int, int, std::string);
	virtual ~BiValue();
	BiValue(const BiValue &other);
	bool operator==(const BiValue& bv) const;
	bool operator<(const BiValue& bv) const;
	bool operator>(const BiValue& bv) const;
	void print();
	int sortValue() const;
	int secondarySortValue() const;
	bool isEqual(int, int) const;

	int first;
	int second;
	std::string name;

protected:
private:


};



#endif /* BIVALUE_H_ */
