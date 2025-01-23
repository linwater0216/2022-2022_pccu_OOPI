#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;
void Student::setName(string a) {
	name = a;
};
string Student::getName() const {
	return name;
};
void Student::setDate(Date a) {
	birthDay = a;
};
Date Student::getDate() const {
	return birthDay;
};
void Student::setScore(int a) {
	score = a;
};
double Student::getScore() const {
	return score;
};

void Student::print()const {
	cout << name << " " << birthDay.getDay() << "/" << birthDay.getMonth() << "/" << birthDay.getYear() << " " << score << endl;
};