#ifndef BALL_H
#define BALL_H
#include "Shape3D.h"
class Ball :public Shape3D
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color);
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
