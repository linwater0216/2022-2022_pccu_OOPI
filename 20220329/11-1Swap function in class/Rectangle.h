#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
#include <iomanip>
#include <iostream>
class Rectangle {
private:
	double width;
	double height;
public:
	void setWidth(double);
	double getWidth(); 
	void setHeight(double);
	double getHeight();
	double getArea();
	void swapByReference(Rectangle&);
	void swapByPointer(Rectangle*);
};
#endif
