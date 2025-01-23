#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    Rational r1(2, 3);
    Rational r2(5, 7);
    Rational r3(3, 5);
    Rational r4(7, 2);
    Rational r5(5, 6);
    Rational r6(5, 7);

    cout << "first=" << r1.add(r2.multiply(r3)).toString() << endl;
    cout << "second=" << r4.subtract(r5).divide(r6).toString() << endl;
    cout << "++first=" << r1.add(r2.multiply(r3)).operator++().toString() << endl;
    cout << "--second=" << r4.subtract(r5).divide(r6).operator--().toString() << endl;
    cout << r1.add(r2.multiply(r3)).operator++().toString() << "<" << r4.subtract(r5).divide(r6).operator--().toString() << endl;
    return 0;
} 