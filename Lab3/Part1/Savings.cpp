/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
#include "Savings.h"
using namespace std;

Savings::Savings() {
	rate = 0.05;
	payment = 100;
	maxAmount = 10000000;
}

// print to tell the difference between this and Checking
void Savings::print() {
	cout << endl;
	cout << name << endl;
	cout << email << endl;
	cout << phoneNumber << endl;
	cout << endl;
	cout << "You have $" << principal << " in your account" << endl;
	cout << "With an interest rate of " << rate << "%" << endl;
	cout << "and a monthly payment of $" << payment << endl;
	cout << "---------" << endl;
}
