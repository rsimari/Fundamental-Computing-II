#include <iostream>
#include "Rational.h"
using namespace std;

int main() {

	Rational numbers[2];
	int i;
	int num, denom;
	for (i = 0; i < 2; i++) {
		cout << "Enter an integer numerator then a denominator" << endl;
		cin >> numbers[i];
		cout << numbers[i] << endl;
	}

	Rational x;
	x = numbers[0] + numbers[1];
	cout << numbers[0] << " + " << numbers[1] << " = " << x << endl;
	x = numbers[0] - numbers[1];
	cout << numbers[0] << " - " << numbers[1] << " = " << x << endl;
	x = numbers[0] * numbers[1];
	cout << numbers[0] << " * " << numbers[1] << " = " << x << endl;
	x = numbers[1] / numbers[0];
	cout << numbers[0] << " / " << numbers[1] << " = " << x << endl;
	x = ~numbers[0];
	cout << "~" << numbers[0] << " = " << x << endl;

	return 0;
}