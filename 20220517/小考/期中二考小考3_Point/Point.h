#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<iomanip>
using namespace std;
class point
{
private:
	int a;
	int b;

public:
	void seta(int z);
	void setb(int z);
	int geta();
	int getb();

	int add();
	int subtract();
	int toString();

};
#endif