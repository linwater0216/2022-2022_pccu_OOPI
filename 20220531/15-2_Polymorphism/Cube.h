#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string color);

	double getvolume() const;//Åé¿n
	double getarea() const;//ªí­±¿n
};  // Must place semicolon here

#endif
