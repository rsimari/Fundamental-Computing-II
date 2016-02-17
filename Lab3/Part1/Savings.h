/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
#include "BankAccount.h"
using namespace std;

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings : public BankAccount {
	private:
		float rate;
		float payment;
		float maxAmount;
	public:
		Savings();
		void print();
};

#endif
