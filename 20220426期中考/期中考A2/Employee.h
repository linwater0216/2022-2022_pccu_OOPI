#ifndef Employee_h
#define Employee_h
#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
	string name;
	string position;
	int	income;
	int	days;
	
public:
	void setName(string);
	void setPosition(string);
	void setIncome(int);
	void setDays(int);
	string getName();
	string getPosition();
	int getIncome();
	int getDays();
	double getWage();
};
#endif
