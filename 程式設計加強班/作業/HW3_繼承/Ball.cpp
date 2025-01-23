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

//���n
double Ball::getArea() const
{
	return radius * radius * 3.14159 * 4;
}

//��n
double Ball::getVolume() const
{
	return 4.0 / 3.0 * radius * radius * radius * 3.14159;
}

//���|
double Ball::getDiameter() const
{
	return 2 * radius;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/