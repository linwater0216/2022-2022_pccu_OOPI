#include "Ball.h"

// Construct a default circle object
Ball::Ball()
{
	setlength(1);//�b�|
}

// Construct a circle object with specified radius
Ball::Ball(double radius)
{
	setlength(radius);//�b�|
}

// Construct a circle object with specified radius, color, filled 
Ball::Ball(double radius, const string color)
{
	setColor(color);//�C��
	setlength(radius);//�b�|
}


// Return the area of this circle
double Ball::getvolume() const
{
	return 4.0 / 3.0 * 3.14159 * getlength() * getlength() * getlength();//��n
}

// Return the perimeter of this circle
double Ball::getarea() const
{
	return getDiameter() * getDiameter() * 3.14159;//���n
}

// Return the diameter of this circle
double Ball::getDiameter() const
{
	return 2 * getlength();//���|
}
/*
�y����n4 / 3�kr ^ 3�A�y�����n4�kr ^ 2
�ߤ��骺��nL ^ 3�A�ߤ��骺���n6L ^ 2
*/