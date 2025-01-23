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


//���n
double Cube::getArea() const
{
	return length * length * 6;
}
//��n
double Cube::getVolume() const
{
	return length * length * length;
}
/*
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
*/