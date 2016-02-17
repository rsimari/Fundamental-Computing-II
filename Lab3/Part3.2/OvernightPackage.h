/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
using namespace std;
#include "Package.h"

class OvernightPackage : public Package {
	private:
		double extraCostPerOunce;
	public:
		OvernightPackage();
		virtual double calculateCost();
		virtual void print();
};

#endif