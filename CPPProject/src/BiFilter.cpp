/*
 * BiFilter.cpp
 *
 *  Created on: May 22, 2020
 *      Author: gary
 */
#include <string>
#include  <iostream>
#include "BiFilter.h"
typedef bool (*bfilter)(int, int, std::string);

BiFilter::BiFilter() {
	// TODO Auto-generated constructor stub

}

BiFilter::~BiFilter() {
	// TODO Auto-generated destructor stub
}

BiFilter::BiFilter(const BiFilter &other) {
	// TODO Auto-generated constructor stub

}

BiFilter::BiFilter(BiFilter &&other) {
	// TODO Auto-generated constructor stub

}

BiFilter& BiFilter::operator=(const BiFilter &other) {
	// TODO Auto-generated method stub

}

BiFilter& BiFilter::operator=(BiFilter &&other) {
	// TODO Auto-generated method stub
}

bfilter BiFilter::sorter(){
	return customFilter;
}

bool customFilter(int first, int second, std::string name){
	std::cout << "Running from function pointer" << std::endl;
	return true;
}



