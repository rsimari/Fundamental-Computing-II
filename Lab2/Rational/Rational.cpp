#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational() {
	num = 1;
	denom = num;
}

Rational::Rational(int x, int y) {
	num = x;
	if (y == 0) {
		cout << "invalid denominator" << endl;
		y = 1;
	} else denom = y;
}

Rational::~Rational() {}

void Rational::reduce() {
	int a, b;
	// finds gcd
	if (abs(num) > abs(denom)) {
		a = abs(num);
		b = abs(denom);
	} else {
		a = abs(denom);
		b = abs(num);
	}
	// euclidean algorithm
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	// divides by gcd
	num /= a;
	denom /= a;
}

Rational Rational::operator+(const Rational &x) { 
	// adds the fractions
	// this + x = r
	Rational r;
	r.num = this->num * x.denom + x.num * this->denom;
	r.denom = this->denom * x.denom;
	return r;
}

Rational Rational::operator*(const Rational &x) {
	// multiplies the fractions
	Rational r;
	r.num = this->num * x.num;
	r.denom = this->denom * x.denom;
	return r;
}

Rational Rational::operator-(const Rational &x) {
	// subtracts the fractions
	Rational r;
	r.num = this->num * x.denom - x.num * this->denom;
	r.denom = this->denom * x.denom;
	return r;
}

Rational Rational::operator/(const Rational &x) {
	// divides the two fractions
	Rational r;
	r.num = this->denom * x.num; 
	r.denom = this->num * x.denom;
	return r;
}

Rational Rational::operator~() { 
	// recipricates the fraction
	int temp;
	Rational r;
	r.num = this->denom;
	r.denom = this->num;
	return r;
}

ostream &operator<<(ostream &stream, Rational &x) {
	// reduces the fraction
	x.reduce();
	// prints the fraction
	stream << x.num << "/" << x.denom;
	return stream;
}

istream &operator>>(istream &stream, Rational &x) {
	stream >> x.num >> x.denom;
	return stream;
}
