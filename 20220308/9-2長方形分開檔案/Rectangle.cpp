#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;


    double Rectangle::getArea()//���n
    {
        return width * height;
    }
    double Rectangle::getPerimeter()//�P��
    {
        return (width + height) * 2;
    }