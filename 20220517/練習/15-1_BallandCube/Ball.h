#ifndef BALL_H
#define BALL_H
#include"GeometricObject.h"

class Ball : public GeometricObject
{
public:
	void setRadius(double);
	double getRadius();
	double getVolume();//ֵי¿n
	double getArea();

private:
	double radius;
};

#endif
