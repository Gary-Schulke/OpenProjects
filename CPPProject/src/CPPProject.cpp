//============================================================================
// Name        : CPPProject.cpp
// Author      : Gary Schulke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include <exception>
#include <list>
#include "Base.h"
#include "BiValue.h"
using namespace std;

void pointerStuff() {
	Base base = Base();
	cout << __cplusplus << endl;
	string className = base.print();

	unique_ptr<Base> up1(new Base());
	up1->print();
	unique_ptr<Base> up2;
	up2 = move(up1);
	up2->print();
	up2.reset();
	up1.reset(new Base());
	up1->print();
	(*up1).print();
	try {
		throw 7;

	} catch (const std::exception &e) {
		cout << "Exception Thrown" << endl;
	} catch (...) {
		cout << "Now that's an exception" << endl;
	}
}

void listStuff() {
	list<BiValue> bival;
	list<BiValue>::iterator itr;
	bival.push_front(BiValue(1, 10, "One"));
	bival.push_front(BiValue(2, 9, "Two"));
	bival.push_front(BiValue(3, 8, "Three"));
	bival.push_front(BiValue(4, 7, "Four"));
	bival.push_front(BiValue(5, 6, "Five"));
	bival.push_front(BiValue(6, 5, "Six"));
	bival.push_front(BiValue(7, 4, "Seven"));
	bival.push_front(BiValue(8, 3, "Eight"));
	bival.push_front(BiValue(9, 2, "Nine"));
	bival.push_front(BiValue(10, 1, "Ten"));

	for (itr = bival.begin(); itr != bival.end(); ++itr) {
		itr->print();
	}
	cout << "Sorted*********" << endl;
	bival.sort();
	//bival.reverse();
	for (itr = bival.begin(); itr != bival.end(); ++itr) {
		itr->print();
	}
}

int main() {
	cout << "!!!CPP Project Hello World!!!" << endl; // prints !!!CPP Project Hello World!!!
//	pointerStuff();
	listStuff();

	return 0;

}
