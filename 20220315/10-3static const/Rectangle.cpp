#include "Rectangle.h"
int Rectangle::numOfRect = 0;

Rectangle::Rectangle() {
	numOfRect++;
};
void Rectangle::setWidth(double a) {
	width = a;
	};//�e��
double Rectangle::getWidth() const {
	return width;
	};
void Rectangle::setHeight(double a) {
	height = a;
	};//����
double Rectangle::getHeight() const {
	return height;
	};
double  Rectangle::getArea() const {
	return width * height;
	};//���n
 int Rectangle::getNumOfRect() {
	return numOfRect;
	};//����μƶq