/*
 * BiFilter.h
 *
 *  Created on: May 22, 2020
 *      Author: gary
 */
#include <string>
#ifndef BIFILTER_H_
#define BIFILTER_H_
typedef bool (*bfilter)(int, int, std::string);
typedef int (*fptr)();
class BiFilter {
public:
	BiFilter();
	virtual ~BiFilter();
	BiFilter(const BiFilter &other);
	BiFilter(BiFilter &&other);
	BiFilter& operator=(const BiFilter &other);
	BiFilter& operator=(BiFilter &&other);

	fptr fg();
	bfilter sorter();
};

bool customFilter(int first, int second, std::string name);

#endif /* BIFILTER_H_ */
