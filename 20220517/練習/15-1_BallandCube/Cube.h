#ifndef CUBE_H
#define CUBE_H
#include"GeometricObject.h"

class Cube : public GeometricObject
{
public:

    void setLength(double);
    double getLength();
    double getVolume();//ֵי¿n
    double getArea();
    
private:
    double Length;
};

#endif
