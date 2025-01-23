#include "Rectangle.h"
void Rectangle::setWidth(double a) {
	width = a;
};
double Rectangle::getWidth() {
	return width;
};
void Rectangle::setHeight(double a) {
	height = a;
};
double Rectangle::getHeight() {
	return height;
};
double Rectangle::getArea() {
	return width * height;
};
void Rectangle::swapByReference(Rectangle& r2) {
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
};
void Rectangle::swapByPointer(Rectangle* r2) {
	Rectangle temp= *this;
	*this = *r2;
	*r2 = temp;
};