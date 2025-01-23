#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
//protected://protected不會繼承下去
public:
	Shape();
	Shape(const string& color);

	string getColor() const;
	void setColor(const string& color);
	//string getColor() const;
	//void setColor(const string& color);
	string toString() const;

	virtual double getArea() const = 0;
private:
	string color;
};

#endif
