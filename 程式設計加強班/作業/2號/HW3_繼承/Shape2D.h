#ifndef CHAPE2D_H
#define CHAPE2D_H
#include "Shape.h"

class Shape2D :public Shape
{
private:
public:
	Shape2D();
	virtual double getArea() const = 0;//�q�W���ǤU�Ӫ�
	virtual double getPerimeter() const = 0;
	string toString() const;
};

#endif
