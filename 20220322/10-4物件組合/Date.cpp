#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;
void Date::setMonth(int a) {
	month = a;
};
int Date::getMonth() const {
	return month;
};
void Date::setDay(int b) {
	day = b;
};
int Date::getDay() const {
	return day;
};
void Date::setYear(int c) {
	year = c;
};
int Date::getYear() const {
	return year;
};

void Date::print()const {
	cout << month << "/" << day << "/" << year;
};