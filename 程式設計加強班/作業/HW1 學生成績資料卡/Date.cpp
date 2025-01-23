#include "Date.h"
using namespace std;
Date::Date()
{
}
Date::Date(int day,int month,int year)
{
	this->day = day;
	this->month = month;
	this->month = month;
}

int Date::getday() const
{
	return day;
}
void Date::setday(int a)
{
	this->day = a;
}
int Date::getmonth() const
{
	return month;
}
void Date::setmonth(int a)
{
	this->month = a;
}
int Date::getyear() const
{
	return year;
}
void Date::setyear(int a)
{
	this->year = a;
}
void Date::printBirthDay()
{
	cout << day << "/" << month << "/" << year;
}
