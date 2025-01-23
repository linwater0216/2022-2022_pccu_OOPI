#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
public:
	Ball();
	Ball(double radius);
	Ball(double radius, const string color);


	double getvolume() const;//��n
	double getarea() const;//���n

	double getDiameter() const;//���|
};  // Must place semicolon here

#endif
