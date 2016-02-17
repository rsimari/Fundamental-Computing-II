/*
author: Robert Simari
date: 2/8/16
Lab3
*/
#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main() {

	Package package;
	TwoDayPackage packageTwoDay;
	OvernightPackage packageOvernight;

	package.calculateCost();
	packageTwoDay.calculateCost();
	packageOvernight.calculateCost();
	
	package.print();
	packageTwoDay.print();
	packageOvernight.print();

	return 0;
}