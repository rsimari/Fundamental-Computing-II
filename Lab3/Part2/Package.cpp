/*
author: Robert Simari
date: 2/8/16
Lab3
*/
#include <iostream>
#include "Package.h"
using namespace std;

Package::Package() {
	name = "Amazon Package";
	weight = 10;
	cost = 5;
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