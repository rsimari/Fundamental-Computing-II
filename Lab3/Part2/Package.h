/*
author: Robert Simari
date: 2/8/16
Lab3
*/
#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
using namespace std;

// base class of an Amazon Package
class Package { 
	private:
	public:
		Package();
		string name;
		int zipCode;
		unsigned int weight;
		unsigned int cost; // per ounce
		virtual double calculateCost();
		virtual void print();
};

#endif