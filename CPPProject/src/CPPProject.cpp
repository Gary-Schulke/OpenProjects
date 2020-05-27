//============================================================================
// Name        : CPPProject.cpp
// Author      : Gary Schulke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <queue>
#include <map>
#include <iterator>
#include <iostream>
#include <memory>
#include <exception>
#include <list>
#include <fstream>
#include <map>
#include "Base.h"
#include "BiValue.h"
#include "BiFilter.h"
#include <signal.h>
using namespace std;

volatile sig_atomic_t gSignalStatus;

void signal_handler(int signal){
	gSignalStatus = signal;
	cout << "signal:" << gSignalStatus << endl;
}
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
	BiValue *bvp = new BiValue(0,0,"bobo");
	bival.push_front(*bvp);
	bival.emplace_front(0,0,"zozo");
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

void queueStuff(){
	priority_queue<BiValue> bique;
//	priority_queue<BiValue>::iterator itr;
		BiValue *bvp = new BiValue(0,0,"bobo");
		bique.push(*bvp);
		bique.emplace(0,0,"zozo");
		bique.push(BiValue(1, 10, "One"));
		bique.push(BiValue(2, 9, "Two"));
		bique.push(BiValue(3, 8, "Three"));
		bique.push(BiValue(4, 7, "Four"));
		bique.push(BiValue(5, 6, "Five"));
		bique.push(BiValue(6, 5, "Six"));
		bique.push(BiValue(7, 4, "Seven"));
		bique.push(BiValue(8, 3, "Eight"));
		bique.push(BiValue(9, 2, "Nine"));
		bique.push(BiValue(10, 1, "Ten"));

		while(!bique.empty()){
			//cout << bique.top().print() << endl;
			BiValue b = bique.top();
			b.print();
			bique.pop();
		}

}

void mapStuff(){
	map<string, int> simap;
	map<string, int>::iterator itr;
	simap.insert(pair<string, int> ("one", 1));
	simap.insert(pair<string, int> ("two", 2));

	itr = simap.begin();
	cout << itr->first << " " << itr->second << endl;
	itr = simap.find("two");
	cout << itr->first << " " << itr->second << endl;
}

void fileWriteStuff(){
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();

}


void fileReadStuff(){
	string line;
	ifstream myfile;
	myfile.open("example.txt");
	if (myfile.is_open()){
		while (getline(myfile, line)){
			cout << line << endl;
		}
	}
	myfile.close();

}

void mapStuff2(){
	std::map<std::string, std::string>  myMap;
	myMap["first"] = "one";
	myMap["second"] = "two";
	myMap["third"] = "three";

	cout << myMap["second"] << endl;
}

void signalStuff(){
	cout << "SignalValue: " << gSignalStatus << endl;
	cout << "Sending signal: " << SIGINT << endl;
	raise(SIGINT);
	cout << "New signal: " << SIGINT << endl;

}
int main() {
	cout << "!!!CPP Project Hello World!!!" << endl; // prints !!!CPP Project Hello World!!!
//	pointerStuff();
	listStuff();
//	queueStuff();
//	mapStuff();
	//fileWriteStuff();
	//fileReadStuff();
	//mapStuff2();
	BiFilter ftr = BiFilter();
	bfilter bf = ftr.sorter();
	bf(1,2,"three");

	signalStuff();

	return 0;

}
