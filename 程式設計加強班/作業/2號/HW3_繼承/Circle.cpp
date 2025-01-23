#include "Circle.h"
#include "Shape.h"
Circle::Circle()
{

}
Circle::Circle(double radius)
{
	setRadius(radius);
	
}
Circle::Circle(double radius, const string& color, Shape& g)
{
	setRadius(radius);
	g.setColor(color);
}
double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

//­±¿n
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

//©Pªø
double Circle::getPerimeter() const
{
	return getDiameter() * 3.14159;
}
//ª½®|
double Circle::getDiameter() const
{
	return 2 * radius;
}
string Circle::toString() const
{
	return "Circle Object";
}