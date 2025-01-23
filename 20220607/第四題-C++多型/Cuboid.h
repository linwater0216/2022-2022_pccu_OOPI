#ifndef CUBOID_H
#define CUBOID_H
#include "Shape.h"

class Cuboid : public Shape
{
public:
	Cuboid();
	Cuboid(double length);
	Cuboid(double length, double width, double height, const string& color);
	double getLength() const;
	void setLength(double);
	double getwidth() const;
	void setwidth(double);
	double getheight() const;
	void setheight(double);
	string toString();

	double getVolume() const;
	double getArea() const;

private:
	double length;
	double width;
	double height;
};  // Must place semicolon here

#endif