#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(double length, const string& color);
	double getEdge() const;
	void setEdge(double);

	//string getColor() const;
	double getArea() const;

private:
	double edge;
};  // Must place semicolon here

#endif
