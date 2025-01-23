#include "Score.h"
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