#include "Triangle.h"

// Construct a default circle object
Triangle::Triangle()
{
}

// Construct a circle object with specified radius, color, filled 
Triangle::Triangle(double base, double height, const string& color)
{
	setColor(color);
	setBase(base);
	setHeight(height);
}

double Triangle::getBase() const
{
	return base;
}
void Triangle::setBase(double a)
{
	base = a;
}
double Triangle::getHeight() const
{
	return height;
}
void Triangle::setHeight(double a)
{
	height = a;
}

//���n
double Triangle::getArea() const
{
	return base * height / 2;
}
/*
string Triangle::getColor() const
{
	return getColor();
}
*/
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/