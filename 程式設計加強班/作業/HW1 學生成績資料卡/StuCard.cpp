#include "StuCard.h"
StuCard::StuCard(string a, bool b, double  c, double d, double e,int day,int mon, int year)
{
	setName(a);
	setSex(b);
	setScore(0, c);
	setScore(1, d);
	setScore(2, e);
	BirthDay.setday(day);
	BirthDay.setmonth(mon);
	BirthDay.setyear(year);
}
StuCard::StuCard()
{

}
void StuCard::setName(string a)
{
	name = a;
}
string StuCard::getName() const
{
	return name;
}
void StuCard::setSex(bool a)
{
	sex = a;
}
bool StuCard::getSex() const
{
	return sex;
}
void StuCard::setScore(int a, double b)
{
	scoreAry[a] = b;
}
double StuCard::getScore(int a) const
{
	return scoreAry[a];
}
void StuCard::setDate(int a, int b, int c)
{
	BirthDay.setday(a);
	BirthDay.setmonth(b);
	BirthDay.setyear(c);
}
void StuCard::setDate(Date a)
{
	BirthDay = a;
}
Date StuCard::getDate()
{
	return BirthDay;
}
double StuCard::average()
{
	double t = 0;
	for (int i = 0; i < 3; i++) 
	{
		t = t + scoreAry[i];
	}
	return t / 3;
}
int StuCard::getAge(int year)
{
	return 2020 - BirthDay.getyear();
}
void StuCard::printCard()
{
	//Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 21
	cout << name << ", " << sex << ", ";
	for (int i = 0; i < 3; i++)
	{
		cout <<fixed<<setprecision(1) << scoreAry[i] << ", ";
	}
	cout << fixed << setprecision(1) << BirthDay.getmonth() << "/" << BirthDay.getday() << "/" << BirthDay.getyear() << ", " << average() << ", " << getAge(BirthDay.getyear()) << endl;
}