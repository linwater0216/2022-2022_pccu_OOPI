#include "Teacher.h"


// Construct a default student
Teacher::Teacher()
{
}

// Construct a Teacher object with specified data
Teacher::Teacher(const string& name,int age, double score)
{
	//setFirstName(firstName);
	//setMi(mi);
	//setLastName(lastName);
	//setScore(score);
	setAge(age);
	setName(name);
	setLScore(score);
}

void Teacher::setFirstName(const string& s)
{
	strcpy_s(firstName, s.c_str());
}

void Teacher::setMi(char mi)
{
	this->mi = mi;
}

void Teacher::setLastName(const string& s)
{
	strcpy_s(lastName, s.c_str());
}
/*
void Teacher::setScore(int score)
{
	this->score = score;
}*/

string Teacher::getFirstName() const
{
	return string(firstName);
}

char Teacher::getMi() const
{
	return mi;
}

string Teacher::getLastName() const
{
	return string(lastName);
}
/*
int Teacher::getScore() const
{
	return score;
}*/
void Teacher::writeToFile(ofstream& out)
{
	//cout << "1";
	cout <<fixed<< name << " " << age << " " << score << endl;
	//cout << "1";
}
void Teacher::readFromFile(ifstream& in)
{
	in >> firstName >> mi >> lastName >> score;
}



void Teacher::setName(const string& a)
{
	name = a;
}
void Teacher::setAge(int a)
{
	age = a;
}
void Teacher::setLScore(double a)
{
	score = a;
}
string Teacher::setName()
{
	return name;
}
int Teacher::setAge()
{
	return age;
}
double Teacher::setLScore()
{
	return score;
}