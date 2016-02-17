/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
#include "BankAccount.h"
using namespace std;

#ifndef CHECKING_H
#define CHECKING_H

class Checking : public BankAccount {
	private:
		float rate;
		float payment;
		float maxAmount;
		int months;
	public:
		Checking();
		Checking(string,float,float,float);
		void print();
};

#endif
