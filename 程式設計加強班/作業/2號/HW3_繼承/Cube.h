#ifndef CUBE_H
#define CUBE_H
#include "Shape3D.h"
#include "Shape.h"
class Cube :public Shape3D, public Shape
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string& color, Shape& g);
	double getLength() const;
	void setLength(double);

	double getVolume() const;
	double getArea() const;

	string toString() const;
private:
	double length;
};  // Must place semicolon here

#endif
