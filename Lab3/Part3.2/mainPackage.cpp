/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/
#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main() {

	TwoDayPackage twoDay[3]; // array of bottom level classes
	OvernightPackage over[3]; // these classes inherit from Package

	int i;
	for (i = 0; i < 3; i++) {
		Package *pack = &twoDay[i]; // morphing into different class
		cout << "Name -> TwoDayPackage" << endl; // uses members of twoDay
		cout << "Cost -> " << pack->calculateCost() << endl;
		cout << "Address -> " << pack->zipCode << endl;
		pack = &over[i]; // morphs into different class
		pack->print(); // uses members of over
		cout << "Name -> OvernightPackage" << endl;
		cout << "Cost -> " << pack->calculateCost() << endl;
		cout << "Address -> " << pack->zipCode << endl;
		cout << "----------------" << endl;
	}

	return 0;
}
