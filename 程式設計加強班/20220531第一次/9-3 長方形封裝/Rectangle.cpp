#include "Rectangle.h"


double Rectangle::getArea()//���n
{
    return width * height;
}
double Rectangle::getPerimeter()//�P��
{
    return (width + height) * 2;
}
void Rectangle::setWidth(double b) 
{
    width = b;
}
void Rectangle::setHeight(double a) 
{
    height = a;
}
