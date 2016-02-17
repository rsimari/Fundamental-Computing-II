/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/

#include <iostream>
using namespace std;

#include "BankAccountC.h"

BankAccountC::BankAccountC() {
	card = new CreditCard;
}

BankAccountC::BankAccountC(string n, string phone) {
	card = new CreditCard;
	name = n;
	phoneNumber = phone;
}

BankAccountC::~BankAccountC() {
}

unsigned int BankAccountC::getCard() {
	return card->getID();
}