#include "Rectangle.h"
int Rectangle::numOfRect = 0;

Rectangle::Rectangle() {
	numOfRect++;
};
void Rectangle::setWidth(double a) {
	width = a;
	};//寬度
double Rectangle::getWidth() const {
	return width;
	};
void Rectangle::setHeight(double a) {
	height = a;
	};//長度
double Rectangle::getHeight() const {
	return height;
	};
double  Rectangle::getArea() const {
	return width * height;
	};//面積
 int Rectangle::getNumOfRect() {
	return numOfRect;
	};//長方形數量