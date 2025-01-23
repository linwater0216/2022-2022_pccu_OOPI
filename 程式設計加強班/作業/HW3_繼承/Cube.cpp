#include "Cube.h"
Cube::Cube()
{
	length = 1;
}
Cube::Cube(double length)
{
	setLength(length);
}
Cube::Cube(double length, const string& color)
{
	setLength(length);
	setColor(color);
}
string Cube::toString() const
{
	return "Cube Object";
}
double Cube::getLength() const
{
	return length;
}
void Cube::setLength(double length)
{
	this->length = length;
}


//表面積
double Cube::getArea() const
{
	return length * length * 6;
}
//體積
double Cube::getVolume() const
{
	return length * length * length;
}
/*
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
*/