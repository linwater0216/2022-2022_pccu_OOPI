#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape2D.h"
#include "Shape.h"
class Rectangle :public Shape2D, public Shape
{
public:
	Rectangle();
	Rectangle(double length);
	Rectangle(double length, const string& color, Shape& g);
	double getLength() const;
	void setLength(double);
	double getWidth() const;
	void setWidth(double);
	double getPerimeter() const;
	double getArea() const;
	string toString() const;
private:
	double length;
	double width;
};  // Must place semicolon here

#endif
