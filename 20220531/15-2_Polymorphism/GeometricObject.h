#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
protected:
	GeometricObject();
	GeometricObject(const string& color, double& length);

public:
	string getColor() const;
	void setColor(const string& co);
	double getlength() const;
	void setlength(const double& le);

	virtual double getvolume() const = 0;
	virtual double getArea() const = 0;


private:
	string color;
	double length;
}; // Must place semicolon here

#endif
