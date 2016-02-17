/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
using namespace std;

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
	private:
		// properties of an top level Bank Account
	public:
		BankAccount();
		string name;
		string phoneNumber;
		string email;
		float principal;
};

#endif
