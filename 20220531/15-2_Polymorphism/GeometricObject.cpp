#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
	color = "white";
}

GeometricObject::GeometricObject(const string& color, double& length)
{
	setColor(color);
	setlength(length);
}

string GeometricObject::getColor() const
{
	return color;
}

void GeometricObject::setColor(const string& co)
{
	color = co;
}

void GeometricObject::setlength(const double& le)
{
	length = le;
}
double GeometricObject::getlength() const
{
	return length;
}