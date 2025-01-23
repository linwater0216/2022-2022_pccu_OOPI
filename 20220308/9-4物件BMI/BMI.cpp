#include <string>
#include <iostream>
#include "BMI.h"
using namespace std;
double BMI::getBMI() {
	return weight / (height * height);
};
void BMI::setstring(string v) {
	name = v;
}
void BMI::setweight(double a) {
	weight = a;
};
void BMI::setheight(double b) {
	height = b;
};