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

//表面積
double Cuboid::getArea() const
{
	return length * length * 6;
}
//體積
double Cuboid::getVolume() const
{
	return length * width * height;
}
/*
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/