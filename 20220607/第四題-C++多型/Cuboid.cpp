#include "Cuboid.h"

// Construct a default retangle object
Cuboid::Cuboid()
{
	length = 1;
}

// Construct a rectangle object with specified width and height
Cuboid::Cuboid(double length)
{
	setLength(length);
}

// Construct a rectangle object with width, height, color, filled
Cuboid::Cuboid(double length, double width, double height, const string& color)
{
	setLength(length);
	setwidth(width);
	setheight(height);
	setColor(color);
}

// Return the width of this rectangle
double Cuboid::getLength() const
{
	return length;
}

// Set a new radius
void Cuboid::setLength(double length)
{
	this->length = length;
}

double Cuboid::getwidth() const
{
	return width;
}
void Cuboid::setwidth(double width)
{
	this->width = width;
}
double Cuboid::getheight() const
{
	return height;
}
void Cuboid::setheight(double height)
{
	this->height = height;
}

string Cuboid::toString()
{
	return "Cuboid object";
}

//���n
double Cuboid::getArea() const
{
	return length * length * 6;
}
//��n
double Cuboid::getVolume() const
{
	return length * width * height;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/