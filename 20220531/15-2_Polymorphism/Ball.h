#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
public:
	Ball();
	Ball(double radius);
	Ball(double radius, const string color);


	double getvolume() const;//體積
	double getarea() const;//表面積

	double getDiameter() const;//直徑
};  // Must place semicolon here

#endif
