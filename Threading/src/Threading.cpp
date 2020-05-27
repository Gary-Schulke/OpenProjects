//============================================================================
// Name        : Threading.cpp
// Author      : Gary Schulke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void printStuff(int loops){
	for (int i = 0; i <10; i++){
		cout << "Running printStuff loop " << i << endl;
		cout.flush();
		sleep(1);

	}
}

class FuncClass {
public:
	void operator()(int loops){
		for (int i = 0; i < 10; i++){
			cout << "Running FuncClass loop " << i << endl;
			cout.flush();
			sleep(1);
		}
	}
};

int main() {
	cout << "!!!CPP Project Hello World!!!" << endl; // prints !!!CPP Project Hello World!!!
	thread th1 (printStuff, 4);
//	th1.join();

	thread th2 (FuncClass(),3);
	th2.join();

	return 0;


}
