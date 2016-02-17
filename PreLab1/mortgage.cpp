#include <iostream>
#include <stdio.h>
#include "mortgage.h"
using namespace std;


Mortgage::Mortgage() {
	Principal = 100000.00;
	Rate = 5.0;	
	Payment = 500.00;
}

Mortgage::Mortgage(double prin, double r, double pay) {
	// check for values?
	if (r < 0)
		cout << "The interest rate must be positive!" << endl;
	else Rate = r;
	Principal = prin;
	Payment = pay;
}

Mortgage::~Mortgage() {
	// stuff
}

void Mortgage::credit(double value) {
	if (Principal - value > 0)
		Principal -= value;
	else Principal = 0;
}

double Mortgage::getPrincipal() {
	return Principal;
}

void Mortgage::amortize() {
	int totalPayment = 0;
	int Balance = Principal;
	int months = 0;
	double interestCalc = Rate/1200;
	cout << "Month\tPayment\t\tInterest\tBalance" << endl;
	while (Balance > 0) {
		months++;
		Rate = interestCalc*Balance;
		if (Balance < Payment) {
			Payment = Rate + Balance; // if the payment exceeds the remaining balance just pay that amount
			Balance = 0; // the balance will now = 0
		} else {
			Balance = Balance + Rate - Payment; // subtract the payment 
		}
		if (Balance > Principal) {  // this happens if your payment isnt big enough... it will cause in infinite loop :(
			cout << "Your monthly payment is not big enough! You will never pay off your mortgage" << endl;
			break;
		}
		printf("%4d \t %7.2f \t %8f \t %6d\n", months, Payment, Rate, Balance);
		//cout << months << "\t$" << Payment << "\t" << Rate << "\t\t$" << Balance << endl;
		totalPayment = totalPayment + Payment;
	}
	int years = months / 12; // to find years
	months = months % 12; // to find months
	cout << "You paid $" << totalPayment << " over " << years << " years and " << months << " months" << endl; 
}


