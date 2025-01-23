#include "Rectangle.h"
Rectangle::Rectangle()
{
	length = 1;
}
Rectangle::Rectangle(double length)
{
	setLength(length);
}
Rectangle::Rectangle(double length, double width, const string& color)
{
	setLength(length);
	setWidth(width);
	setColor(color);
}
string Rectangle::toString() const
{
	return "Rectangle Object";
}

double Rectangle::getLength() const
{
	return length;
}
void Rectangle::setLength(double length)
{
	this->length = length;
}

double Rectangle::getWidth() const
{
	return width;
}
void Rectangle::setWidth(double width)
{
	this->width = width;
}

//面積
double Rectangle::getArea() const
{
	return length * width;
}
//表面積
double Rectangle::getPerimeter() const
{
	return (length + width) * 2;
}
/*
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/