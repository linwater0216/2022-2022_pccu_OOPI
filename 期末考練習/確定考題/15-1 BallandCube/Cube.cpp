#include "Cube.h"

// Construct a default retangle object
Cube::Cube()
{
	length = 1;
}

// Construct a rectangle object with specified width and height
Cube::Cube(double length)
{
	setLength(length);
}

// Construct a rectangle object with width, height, color, filled
Cube::Cube(double length, const string& color)
{
	setLength(length);
	setColor(color);
}

// Return the width of this rectangle
double Cube::getLength() const
{
	return length;
}

// Set a new radius
void Cube::setLength(double length)
{
	this->length = length;
}


//表面積
double Cube::getArea() const
{
	return length * length * 6;
}
//體積
double Cube::getVolume() const
{
	return length * length * length;
}
/*
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/