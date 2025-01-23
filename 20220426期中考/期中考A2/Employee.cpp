#include "Employee.h"
void Employee::setName(string a) {
	name = a;
};
void Employee::setPosition(string a) {
	position = a;
};
void Employee::setIncome(int a) {
	income = a;
};
void Employee::setDays(int a) {
	days = a;
};


string Employee::getName() {
	return name;
};
string Employee::getPosition() {
	return position;
};
int Employee::getIncome() {
	return income;
};
int Employee::getDays() {
	return days;
};
double Employee::getWage() {
	double a,b,c;
	b = income;
	c = days;
	a = b / c;
	return a;
};