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
double Cube::getvolume() const//��n
{
	return getlength() * getlength() * getlength();
}

// Return the perimeter of this rectangle
double Cube::getarea() const//���n
{
	return getlength() * getlength() * 6;
}
/*
�y����n4 / 3�kr ^ 3�A�y�����n4�kr ^ 2
�ߤ��骺��nL ^ 3�A�ߤ��骺���n6L ^ 2
*/