/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/
#include <iostream>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage() {
	extraCost = 2;
}

double TwoDayPackage::calculateCost() {
	return (cost * weight + extraCost) * 1.0;
}

void TwoDayPackage::print() {
	cout << "Name -> TwoDayPackage" << endl;
	cout << "Weight -> " << weight << endl;
	cout << "Cost -> $" << calculateCost() << endl;
	cout << "=======" << endl;
}