/*
author: Robert Simari
date: 2/8/16
Lab3 Part2
*/
#include <iostream>
#include "BankAccount.h"
#include "Checking.h"
#include "Savings.h"
using namespace std;

int main() {

	// savings example
	Savings save;
	save.name = "Robert Simari";
	save.phoneNumber = "(444)333-2222";
	save.email = "rsimari@nd.edu";
	save.principal = 5000;
	save.print();

	// checking example
	Checking check("Iramis Trebor", 0.1, 200, 100000);
	check.phoneNumber = "(222)333-4444";
	check.email = "iramis@nd.edu";
	check.print();
	
	return 0;
}
