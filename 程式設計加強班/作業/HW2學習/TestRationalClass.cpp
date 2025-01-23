
#include "Rational.h"
using namespace std;

int main()
{
    // Create and initialize two rational numbers r1 and r2.
    Rational r1(4, 2);
    Rational r2(2, 3);
    // Test toString, add, subtract, multiply, and divide
    cout << "+场だcoutセ" << endl;
    cout << r1 << " + " << r2 << " = " << r1.add(r2) << endl;
    cout << r1 << " + " << r2 << " = " << (r1 + r2) << endl;
    cout << r1 << " + " << r2 << " = " << operator+(r1, r2) << endl;
    cout << r1 << " + " << r2 << " = " << r1.operator+(r2) << endl;
    cout << r1 << " + " << r2 << " = " << r1 + r2 << endl;
    cout << "+场だtostringセ" << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << r1.add(r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << (r1 + r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << operator+(r1, r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << r1.operator+(r2).toString() << endl;
    cout << "-场だcoutセ" << endl;
    cout << r1 << " - " << r2 << " = " << r1.subtract(r2) << endl;
    cout << r1 << " - " << r2 << " = " << (r1 - r2) << endl;
    cout << r1 << " - " << r2 << " = " << operator-(r1, r2) << endl;
    cout << r1 << " - " << r2 << " = " << r1.operator-(r2) << endl;
    cout << r1 << " - " << r2 << " = " << r1 - r2 << endl;
    cout << "-场だtostringセ" << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << r1.subtract(r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << (r1 - r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << operator-(r1, r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << r1.operator-(r2).toString() << endl;
    cout << "*场だcoutセ" << endl;
    cout << r1 << " * " << r2 << " = " << r1.multiply(r2) << endl;
    cout << r1 << " * " << r2 << " = " << (r1 * r2) << endl;
    cout << r1 << " * " << r2 << " = " << operator*(r1, r2) << endl;
    cout << r1 << " * " << r2 << " = " << r1.operator*(r2) << endl;
    cout << r1 << " * " << r2 << " = " << r1 * r2 << endl;
    cout << "*场だtostringセ" << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << r1.multiply(r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << (r1 * r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << operator*(r1, r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << r1.operator*(r2).toString() << endl;
    cout << "/场だcoutセ" << endl;
    cout << r1 << " / " << r2 << " = " << r1.divide(r2) << endl;
    cout << r1 << " / " << r2 << " = " << (r1 / r2) << endl;
    cout << r1 << " / " << r2 << " = " << operator/(r1, r2) << endl;
    cout << r1 << " / " << r2 << " = " << r1.operator/(r2) << endl;
    cout << r1 << " / " << r2 << " = " << r1 / r2 << endl;
    cout << "/场だtostringセ" << endl;
    cout << r1.toString() << " / " << r2.toString() << " = " << r1.divide(r2).toString() << endl;
    cout << r1.toString() << " / " << r2.toString() << " = " << (r1 / r2).toString() << endl;
    cout << r1.toString() << " / " << r2.toString() << " = " << operator/(r1, r2).toString() << endl;
    cout << r1.toString() << " / " << r2.toString() << " = " << r1.operator/(r2).toString() << endl;
    cout << "ЧΘ代刚" << endl;

    Rational r4(1, 2);
    r4[0] = 3; r4[1] = 4;
    cout << "r4 is " << r4 << endl;

    // Test intValue and double
    cout << "r2.intValue()" << " is " << r2.intValue() << endl;
    cout << "r2.doubleValue()" << " is " << r2.doubleValue() << endl;

    // Test compareTo and equal
    cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
    cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
    cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;
    cout << "r1.equals(r1) is " << (r1.equals(r1) ? "true" : "false") << endl;
    cout << "r1.equals(r2) is " << (r1.equals(r2) ? "true" : "false") << endl;
    cout << "代刚<" << endl;
    cout << ((r1 < r2) ? "true" : "false") << endl;
    cout << (operator<(r1,r2) ? "true" : "false") << endl;
    cout << (r1.operator<(r2) ? "true" : "false") << endl;
    cout << "代刚<=" << endl;
    cout << ((r1 <= r2) ? "true" : "false") << endl;
    cout << (operator<=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator<=(r2) ? "true" : "false") << endl;
    cout << "代刚>" << endl;
    cout << ((r1 > r2) ? "true" : "false") << endl;
    cout << (operator>(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator>(r2) ? "true" : "false") << endl;
    cout << "代刚>=" << endl;
    cout << ((r1 >= r2) ? "true" : "false") << endl;
    cout << (operator>=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator>=(r2) ? "true" : "false") << endl;
    cout << "代刚==" << endl;
    cout << ((r1 == r2) ? "true" : "false") << endl;
    cout << (operator==(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator==(r2) ? "true" : "false") << endl;
    cout << "代刚!=" << endl;
    cout << ((r1 != r2) ? "true" : "false") << endl;
    cout << (operator!=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator!=(r2) ? "true" : "false") << endl;

    return 0;
}