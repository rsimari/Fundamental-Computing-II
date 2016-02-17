/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/
#include <iostream>
#include "BankAccountC.h"
#include "CreditCard.h"

int main() {

	BankAccountC bank;
	cout << "ID = "<<  bank.getCard() << endl; // this shows that getCard() is using composition because bank is accessing a creditCard member
	return 0;
}
