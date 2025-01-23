#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"

class Circle : public Shape2D
{
public:
	Circle();
	Circle(double);
	Circle(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);
	string toString() const;

	double getArea() const;//�q�W���ǤU�Ӫ����n
	double getPerimeter() const;//�q�W���ǤU�Ӫ��P��
	double getDiameter() const;//���|
	
private:
	double radius;
};  // Must place semicolon here
#endif
