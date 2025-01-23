#include "Shape.h"

Shape::Shape()
{
	color = "white";
}

Shape::Shape(const string& color)
{
	setColor(color);
}

string Shape::getColor() const
{
	return color;
}

void Shape::setColor(const string& color)
{
	this->color = color;
}