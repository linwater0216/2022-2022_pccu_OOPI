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

//表面積
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
球的體積4/3πr^3，球的表面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/