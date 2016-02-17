/*
author: Robert Simari
date: 2/8/16
Lab3
*/
#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage() {
	extraCostPerOunce = 5; // unique data member for this class
}

double OvernightPackage::calculateCost() {
	return weight * (cost + extraCostPerOunce);
}

void OvernightPackage::print() {
	cout << "Name -> OvernightPackage" << endl;
	cout << "Weight -> " << weight << endl;
	cout << "Cost -> $" << calculateCost() << endl;
	cout << "=======" << endl;
}
