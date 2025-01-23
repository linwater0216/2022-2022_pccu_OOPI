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


//���n
double Cube::getArea() const
{
	return length * length * 6;
}
//��n
double Cube::getVolume() const
{
	return length * length * length;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/