#include "Ball.h"

Ball::Ball()
{
}

Ball::Ball(double radius)
{
	setRadius(radius);
}

Ball::Ball(double radius, const string& color)
{
	setRadius(radius);
	setColor(color);
}
string Ball::toString() const
{
	return "Ball Object";
}
double Ball::getRadius() const
{
	return radius;
}

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