/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/
#include <iostream>
using namespace std;

#ifndef CREDITCARD_H
#define CREDITCARD_H

class CreditCard {
	private:
		unsigned int idNumber;
	public:
		CreditCard();
		unsigned int getID();
};


#endif