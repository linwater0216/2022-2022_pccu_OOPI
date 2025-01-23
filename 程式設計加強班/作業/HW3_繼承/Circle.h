#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"

class Circle : public Shape2D
{
public:
	Circle();
	Circle(double);
	Circle(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);
	string toString() const;

	double getArea() const;//從上面傳下來的面積
	double getPerimeter() const;//從上面傳下來的周長
	double getDiameter() const;//直徑
	
private:
	double radius;
};  // Must place semicolon here
#endif
