/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
#include "Checking.h"
using namespace std;

Checking::Checking() {}

// constructor to instialize values of the Checking account
Checking::Checking(string n, float r, float pay, float prin) {
	name = n;
	rate = r;
	payment = pay;
	principal = prin;
}

// print function to print the variables so you can tell the difference between this and another class
void Checking::print() {
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
