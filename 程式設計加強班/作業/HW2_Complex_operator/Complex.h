#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
#include <iostream>
#include <sstream> // Used in toString to convert numbers to strings
#include <cstdlib> // For the abs function
using namespace std;

class Complex
{
private:
	int number;
	int numi;
	//static int gcd(int n, int d);
public:
	Complex();
	Complex(int a, int b);
	void setNumber(int a);
	void setNumi(int a);
	int getNumber() const;
	int getNumi() const;
	Complex add(const Complex& secondComplex) const;
	Complex subtract(const Complex& secondComplex) const;
	Complex multiply(const Complex& secondComplex) const;

	int compareTo(const Complex& secondComplex) const;
	bool equals(const Complex& secondComplex) const;
	int intValue() const;
	double doubleValue() const;
	string toString() const;



	Complex operator+(const Complex& r2);
	Complex operator-(const Complex& r2);
	Complex operator*(const Complex& r2);
	bool operator<(const Complex& r2);
	bool operator<=(const Complex& r2);
	bool operator>(const Complex& r2);
	bool operator>=(const Complex& r2);
	bool operator==(const Complex& r2);
	bool operator!=(const Complex& r2);
	Complex& operator+=(const Complex& secondRational);
	Complex& operator-=(const Complex& secondRational);
	Complex& operator*=(const Complex& secondRational);
	int& operator[](int index);
	// Define function operators for prefix ++ and --«e¼Y
	Complex& operator++();
	Complex& operator--();
	// Define function operators for postfix ++ and --«á¼Y
	Complex operator++(int dummy);
	Complex operator--(int dummy);
	// Define function operators for unary + and -
	Complex operator+();
	Complex operator-();

friend ostream& operator<<(ostream&, const Complex&);
friend istream& operator>>(istream&, Complex&);
};
Complex operator+(const Complex& r1, const Complex& r2);
Complex operator-(const Complex& r1, const Complex& r2);
Complex operator*(const Complex& r1, const Complex& r2);
bool operator<(const Complex& r1, const Complex& r2);
bool operator<=(const Complex& r1, const Complex& r2);
bool operator>(const Complex& r1, const Complex& r2);
bool operator>=(const Complex& r1, const Complex& r2);
bool operator==(const Complex& r1, const Complex& r2);
bool operator!=(const Complex& r1, const Complex& r2);
//Complex& operator+=(const Complex& secondRational);


#endif
