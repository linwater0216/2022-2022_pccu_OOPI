#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int Rectangle::numOfArea = 0;

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

double Rectangle::getallArea()const {
	return numOfArea;
};

void Rectangle::sum(Rectangle rectArray[], int size) {
	for (int i = 0; i < size; i++) {
		numOfArea += rectArray[i].width * rectArray[i].height;
	}
};

void Rectangle::printRectangleArray(Rectangle rectArray[], int size) const {
		cout << getWidth() << " " << getHeight() << " " << getArea() << endl;
};