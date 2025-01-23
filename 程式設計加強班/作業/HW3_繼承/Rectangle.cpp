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

//���n
double Rectangle::getArea() const
{
	return length * width;
}
//���n
double Rectangle::getPerimeter() const
{
	return (length + width) * 2;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/