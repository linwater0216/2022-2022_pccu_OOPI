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
//strcpy舊版本"特殊涵式copy右到左"(firstName"char", s.c_str()"s string的char版本");
//strcpy_s"特殊涵式copy右到左"(firstName"char", s.c_str()"s string的char版本");
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