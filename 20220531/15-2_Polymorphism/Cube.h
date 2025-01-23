#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string color);

	double getvolume() const;//��n
	double getarea() const;//���n
};  // Must place semicolon here

#endif
