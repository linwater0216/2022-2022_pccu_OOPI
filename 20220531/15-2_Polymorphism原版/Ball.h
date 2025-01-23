#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);

	double getVolume() const;
	double getArea() const;

	double getDiameter() const;

private:
	double radius;
};  // Must place semicolon here

#endif
