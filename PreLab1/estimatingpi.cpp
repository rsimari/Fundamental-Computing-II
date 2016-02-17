#include <iostream>
using namespace std;

int main() {

	double i, n;
	double sum;
	while (1) {
		cout << "Please enter the number of terms in the series: ";
		cin >> n;
		if (n >= 2) // if the input is valid go to next part
			break;
		// if input is invalid
		else cout << "Error! Provided value must be >= 2!" << endl;
	}

	double x = 1;
	double temp;
	for (i = 1; i <= n; i++) {
		// next term
		temp = x * (4/(2 * i - 1)); 
		// add term to sum
		sum += temp;
		// switch + and - for next term
		x *= -1;
		// print the new sum
		cout << "Estimate after " << i << " term(s): " << sum << endl;
	}

	return 0;
}