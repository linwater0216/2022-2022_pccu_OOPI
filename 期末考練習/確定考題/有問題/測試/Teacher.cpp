#include "Teacher.h"

// Construct a default student
Teacher::Teacher()
{
}

// Construct a Teacher object with specified data
Teacher::Teacher(const string& firstName, int age, double score)
{
	setname(firstName);
	//setMi(mi);
	//setLastName(lastName);
	setAge(age);
	setScore(score);
}

void Teacher::setname(const string& s)
{
	name = s;
	//strcpy_s(name, s.c_str());
}
//strcpy�ª���"�S��[��copy�k�쥪"(firstName"char", s.c_str()"s string��char����");
//strcpy_s"�S��[��copy�k�쥪"(firstName"char", s.c_str()"s string��char����");
/*
void Teacher::setMi(char mi)
{
	this->mi = mi;
}

void Teacher::setLastName(const string& s)
{
	strcpy_s(lastName, s.c_str());
}*/

void Teacher::setScore(double score)
{
	this->score = score;
}

string Teacher::getname() const
{
	return name;
}
/*
char Teacher::getMi() const
{
	return mi;
}

string Teacher::getLastName() const
{
	return string(lastName);
}*/

double Teacher::getScore() const
{
	return score;
}
void Teacher::setAge(int a)
{
	age = a;
}
int Teacher::getAge() const
{
	return age;
}