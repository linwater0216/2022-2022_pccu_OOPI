#include "Cube.h"

// Construct a default retangle object
Cube::Cube()
{
}

// Construct a rectangle object with specified width and height
Cube::Cube(double length)
{
	setlength(length);
}

// Construct a rectangle object with width, height, color, filled
Cube::Cube(double length, const string color)
{
	setlength(length);
	setColor(color);
}


// Return the area of this rectangle
double Cube::getvolume() const//體積
{
	return getlength() * getlength() * getlength();
}

// Return the perimeter of this rectangle
double Cube::getarea() const//表面積
{
	return getlength() * getlength() * 6;
}
/*
球的體積4 / 3πr ^ 3，球的面積4πr ^ 2
立方體的體積L ^ 3，立方體的面積6L ^ 2
*/