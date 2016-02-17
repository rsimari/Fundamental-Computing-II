/*
author: Robert Simari
date: 2/8/16
Lab3
*/
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include "Package.h"
using namespace std;

class TwoDayPackage: public Package {
	private:
		
	public:
		TwoDayPackage();
		double extraCost;
		virtual double calculateCost();
		virtual void print();
};

#endif
