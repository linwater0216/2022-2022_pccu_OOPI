#include "Rectangle.h"

// Construct a default retangle object
Rectangle::Rectangle()
{
	edge = 1;
}


// Construct a rectangle object with width, height, color, filled
Rectangle::Rectangle(double edge, const string& color)
{
	setEdge(edge);
	setColor(color);
}

// Return the width of this rectangle
double Rectangle::getEdge() const
{
	return edge;
}

// Set a new radius
void Rectangle::setEdge(double edge)
{
	this->edge = edge;
}


//���n
double Rectangle::getArea() const
{
	return edge * edge;
}
/*
string Rectangle::getColor() const
{
	return getColor();
}
*/
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/