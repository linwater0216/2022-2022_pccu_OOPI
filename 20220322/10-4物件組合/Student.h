#ifndef Student_H
#define Student_H
#include <string>
#include "Date.h"
using namespace std;
class Student
{
private:
	string name;
	Date birthDay;
	int score;
public:
	void setName(string);
	string getName() const;
	void setDate(Date);
	Date getDate() const;
	void setScore(int);
	double getScore() const;

	void print()const;
};
#endif