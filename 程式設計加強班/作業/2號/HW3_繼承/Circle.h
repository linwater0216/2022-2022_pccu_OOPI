#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include "Shape.h"
class Circle :public  Shape2D, public Shape
{
public:
	Circle();
	Circle(double);
	Circle(double radius, const string& color, Shape& g);
	double getRadius() const;
	void setRadius(double);
	string toString() const;

	double getArea() const = 0;//�q�W���ǤU�Ӫ����n
	double getPerimeter() const = 0;//�q�W���ǤU�Ӫ��P��
	double getDiameter() const;//���|
	
private:
	double radius;
};  // Must place semicolon here

#endif
