/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/
#include <iostream>
#include "Package.h"
using namespace std;

Package::Package() {
	name = "Amazon Package";
	weight = 10; // this will not change in the sub classes to show that this is inherited
	cost = 5; // this will be adjusted with additional charges depending on the package
	zipCode = 46556;
}

double Package::calculateCost() {
	return cost * weight * 1.0;
}

void Package::print() {
	cout << name << endl;
	cout << "Weight -> " << weight << endl;
	cout << "Cost -> $" << calculateCost() << endl;
	cout << "=======" << endl;
}