#include "Cube.h"

// Construct a default rectangle object
Cube::Cube()
{
	width = 1;
	height = 1;
}

// Construct a rectangle object with specified width and height
Cube::Cube(double width, double height)
{
	setWidth(width);
	setHeight(height);
}

Cube::Cube(
	double width, double height, const string& color, bool filled)
{
	setWidth(width);
	setHeight(height);
	setColor(color);
	setFilled(filled);
}

// Return the width of this rectangle
double Cube::getWidth() const
{
	return width;
}

// Set a new radius
void Cube::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

// Return the height of this rectangle
double Cube::getHeight() const
{
	return height;
}

// Set a new height
void Cube::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

// Return the area of this rectangle
double Cube::getArea() const
{
	return width * height;
}

// Return the perimeter of this rectangle
double Cube::getPerimeter() const
{
	return 2 * (width + height);
}

// Redefine the toString function, to be covered in Section 15.5
string Cube::toString() const
{
	return "Rectangle object";
}