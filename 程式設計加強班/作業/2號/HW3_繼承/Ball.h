#ifndef BALL_H
#define BALL_H
#include "Shape3D.h"
#include "Shape.h"
class Ball :public Shape3D, public Shape
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color, Shape& g);
	double getRadius() const;
	void setRadius(double);

	double getVolume() const;//��n
	double getArea() const;//���n

	double getDiameter() const;//���|

	string toString() const;
private:
	double radius;
};  // Must place semicolon here

#endif
