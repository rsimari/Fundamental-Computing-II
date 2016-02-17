/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/

#include <iostream>
#include "CreditCard.h"
using namespace std;

#ifndef BANKACCOUNTC_H
#define BANKACCOUNTC_H

class BankAccountC {
	private:
		string name;
		string phoneNumber;
		string email;
		float principal;
		CreditCard *card;
	public:
		BankAccountC();
		BankAccountC(string, string);
		~BankAccountC();
		unsigned int getCard();
		
		
};

#endif