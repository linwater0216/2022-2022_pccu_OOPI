#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string& color);
	double getLength() const;
	void setLength(double);

	double getVolume() const;
	double getArea() const;

private:
	double length;
};  // Must place semicolon here

#endif
