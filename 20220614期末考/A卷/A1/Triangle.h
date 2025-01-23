#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(double base,double height, const string& color);
	double getBase() const;
	void setBase(double a);
	double getHeight() const;
	void setHeight(double a);

	//string getColor() const;
	double getArea() const;

private:
	double base;
	double height;
};  // Must place semicolon here

#endif
