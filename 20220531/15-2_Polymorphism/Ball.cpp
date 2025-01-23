#include "Ball.h"

// Construct a default circle object
Ball::Ball()
{
	setlength(1);//半徑
}

// Construct a circle object with specified radius
Ball::Ball(double radius)
{
	setlength(radius);//半徑
}

// Construct a circle object with specified radius, color, filled 
Ball::Ball(double radius, const string color)
{
	setColor(color);//顏色
	setlength(radius);//半徑
}


// Return the area of this circle
double Ball::getvolume() const
{
	return 4.0 / 3.0 * 3.14159 * getlength() * getlength() * getlength();//體積
}

// Return the perimeter of this circle
double Ball::getarea() const
{
	return getDiameter() * getDiameter() * 3.14159;//表面積
}

// Return the diameter of this circle
double Ball::getDiameter() const
{
	return 2 * getlength();//直徑
}
/*
球的體積4 / 3πr ^ 3，球的面積4πr ^ 2
立方體的體積L ^ 3，立方體的面積6L ^ 2
*/