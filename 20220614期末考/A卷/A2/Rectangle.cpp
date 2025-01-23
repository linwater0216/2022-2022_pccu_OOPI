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


//面積
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
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/