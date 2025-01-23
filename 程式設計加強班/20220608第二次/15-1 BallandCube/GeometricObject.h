#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class GeometricObject
{
protected:
	GeometricObject();
	GeometricObject(const string& color);

public:
	string getColor() const;
	void setColor(const string& color);

	virtual double getVolume() const = 0;
	virtual double getArea() const = 0;

private:
	string color;
}; // Must place semicolon here

#endif
