#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
#include<iostream>
#include<iomanip>
using namespace std;

class GeometricObject
{
public:
	string Color() const;
	void setColor(string);
	string getColor();
	
private:
	string color;
};

#endif 
