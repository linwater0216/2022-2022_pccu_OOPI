#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
#include <iostream>
#include <sstream> // Used in toString to convert numbers to strings
#include <cstdlib> // For the abs function
using namespace std;

class Rational
{
public:
	Rational();
	Rational(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int intValue() const;
	double doubleValue() const;
	string toString() const;

	Rational operator+(const Rational& r2);
	Rational operator-(const Rational& r2);
	Rational operator*(const Rational& r2);
	Rational operator/(const Rational& r2);
	bool operator<(const Rational& r2);
	bool operator<=(const Rational& r2);
	bool operator>(const Rational& r2);
	bool operator>=(const Rational& r2);
	bool operator==(const Rational& r2);
	bool operator!=(const Rational& r2);
	int& operator[](int index);
private:
	int numerator;
	int denominator;
	static int gcd(int n, int d);

friend ostream& operator<<(ostream&, const Rational&);
friend istream& operator>>(istream&, Rational&);

};

ostream& operator<<(ostream& out, const Rational& rational);
istream& operator>>(istream& in, Rational& rational);

Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);
bool operator<(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);



#endif
