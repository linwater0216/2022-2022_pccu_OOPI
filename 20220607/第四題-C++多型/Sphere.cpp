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
//表面積
double Sphere::getArea() const
{
	return radius * radius * 3.14159 * 4;
}

//體積
double Sphere::getVolume() const
{
	return 4.0 / 3.0 * radius * radius * radius * 3.14159;
}

//直徑
double Sphere::getDiameter() const
{
	return 2 * radius;
}
/*
球的體積4/3πr^3，球的表面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/