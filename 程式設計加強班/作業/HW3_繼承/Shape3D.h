#ifndef CHAPE3D_H
#define CHAPE3D_H
#include "Shape.h"

class Shape3D :public Shape
{
private:
public:
	Shape3D();
	string toString() const;
	virtual double getArea() const = 0;//�q�W���ǤU�Ӫ�
	virtual double getVolume() const = 0;
};

#endif
