#ifndef STUCARD_H
#define STUCARD_H
#include<string>
#include<iostream>
#include<iomanip>
#include "Date.h"
using namespace std;
class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date BirthDay;
public:
	StuCard(string a, bool b, double c, double d, double e, int day, int mon, int year);
	StuCard();
	void setName(string a);
	string getName() const;
	void setSex(bool a);
	bool getSex() const;
	void setScore(int a, double b);
	double getScore(int a) const;
	void setDate(int a, int b, int c);
	void setDate(Date);
	Date getDate();

	double average();
	int getAge(int year);
	void printCard();
};

#endif
