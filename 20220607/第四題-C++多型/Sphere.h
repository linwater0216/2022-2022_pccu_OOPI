#ifndef SPHERE_H
#define SPHERE_H
#include "Shape.h"

class Sphere : public Shape
{
public:
	Sphere();
	Sphere(double);
	Sphere(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);
	string toString();

	double getVolume() const;
	double getArea() const;

	double getDiameter() const;

private:
	double radius;
};  // Must place semicolon here

#endif
