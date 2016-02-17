#include <iostream>
using namespace std;

class Rational {
	friend ostream &operator<<(ostream &, Rational &);
	friend istream &operator>>(istream &, Rational &);
	private:
		int num;
		int denom;
		int whole;
	public:
		Rational();
		Rational(int,int);
		~Rational();
		void reduce();
		Rational operator+(const Rational &);
		Rational operator*(const Rational &);
		Rational operator-(const Rational &);
		Rational operator/(const Rational &);
		Rational operator~();
};
