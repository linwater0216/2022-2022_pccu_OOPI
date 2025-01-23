#include "Sphere.h"

// Construct a default circle object
Sphere::Sphere()
{
	radius = 1;
}

// Construct a circle object with specified radius
Sphere::Sphere(double radius)
{
	setRadius(radius);
}

// Construct a circle object with specified radius, color, filled 
Sphere::Sphere(double radius, const string& color)
{
	setRadius(radius);
	setColor(color);
}

// Return the radius of this circle
double Sphere::getRadius() const
{
	return radius;
}

// Set a new radius
void Sphere::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

string Sphere::toString()
{
	return "Sphere object";
}
//���n
double Sphere::getArea() const
{
	return radius * radius * 3.14159 * 4;
}

//��n
double Sphere::getVolume() const
{
	return 4.0 / 3.0 * radius * radius * radius * 3.14159;
}

//���|
double Sphere::getDiameter() const
{
	return 2 * radius;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/