#ifndef DATA_H
#define DATA_H
#include<string>
#include<iostream>

class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int day, int month, int year);
	void setday(int a);
	int getday() const;
	void setmonth(int a);
	int getmonth() const;
	void setyear(int a);
	int getyear() const;
	void printBirthDay();

};

#endif
