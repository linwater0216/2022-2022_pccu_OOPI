#include "Ball.h"

// Construct a default circle object
Ball::Ball()
{
	radius = 1;
}

// Construct a circle object with specified radius
Ball::Ball(double radius)
{
	setRadius(radius);
}

// Construct a circle object with specified radius, color, filled 
Ball::Ball(double radius, const string& color)
{
	setRadius(radius);
	setColor(color);
}

// Return the radius of this circle
double Ball::getRadius() const
{
	return radius;
}

// Set a new radius
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

//表面積
double Ball::getArea() const
{
	return radius * radius * 3.14159 * 4;
}

//體積
double Ball::getVolume() const
{
	return 4.0 / 3.0 * radius * radius * radius * 3.14159;
}

//直徑
double Ball::getDiameter() const
{
	return 2 * radius;
}
/*
球的體積4/3πr^3，球的表面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/