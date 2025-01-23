#include <string>
#include <iostream>
#include "Score.h"
using namespace std;
void Score::setName(string a) {
	name = a;
}
void Score::setMath(int b) {
	math = b;
}
void Score::getName() {
	cout << name << " ";
}
void Score::getMath() {
	cout << math << endl;
}
void Score::print() {
	cout << name << " " << math << endl;
}