/*
author: Robert Simari
date: 2/8/16
Lab3 Part3
*/

#include <iostream>
#include "CreditCard.h"
using namespace std;

CreditCard::CreditCard() {
	idNumber = 123456;
}

unsigned int CreditCard::getID() { return idNumber; }