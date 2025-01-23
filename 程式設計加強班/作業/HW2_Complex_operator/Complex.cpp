#include "Complex.h"
Complex::Complex()
{
    number = 0;
    numi = 0;
}
Complex::Complex(int number, int numi)
{
    this->number = number;
    this->numi = numi;
}

void Complex::setNumber(int a)
{
    number = a;
}
void Complex::setNumi(int a)
{
    numi = a;
}

int Complex::getNumber() const
{
    return number;
}
int Complex::getNumi() const
{
    return numi;
}
/*
int Complex::gcd(int n, int d)//最大公因數
{
    int n1 = abs(n);//絕對值
    int n2 = abs(d);//絕對值
    int gcd = 1;

    for (int k = 1; k <= n1 && k <= n2; k++)
    {
        if (n1 % k == 0 && n2 % k == 0)
            gcd = k;
    }
    return gcd;
}
*/
Complex Complex::add(const Complex& secondComplex) const
{
    int n = number + secondComplex.getNumber();
    int d = numi + secondComplex.getNumi();
    return Complex(n, d);
}
Complex Complex::subtract(const Complex& secondComplex) const
{
    int n = number - secondComplex.getNumber();
    int d = numi - secondComplex.getNumi();
    return Complex(n, d);
}
Complex Complex::multiply(const Complex& secondComplex) const
{
    //(a + bi)(c + di) = (ac - bd) + (bc + ad)i.
    int n = number * secondComplex.getNumber() - numi * secondComplex.getNumi();
    int d = numi * secondComplex.getNumber() + number * secondComplex.getNumi();
    return Complex(n, d);
}

int Complex::compareTo(const Complex& secondComplex) const
{
    Complex temp = subtract(secondComplex);
    if (temp.getNumber() < 0)
        return -1;
    else if (temp.getNumber() == 0)
        return 0;
    else
        return 1;
}
bool Complex::equals(const Complex& secondComplex) const
{
    if (compareTo(secondComplex) == 0)
        return true;
    else
        return false;
}
int Complex::intValue() const
{
    return getNumber() / getNumi();
}
double Complex::doubleValue() const
{
    return 1.0 * getNumber() / getNumi();
}
string Complex::toString() const
{
    stringstream ss;
    ss << number;
    if(numi>=0)
        ss << "+" << numi << "i";
    else
        ss  << numi << "i";
    return ss.str();
}









Complex operator+(const Complex& r1, const Complex& r2)
{
    return r1.add(r2);
}
Complex Complex::operator+(const Complex& r2)
{
    return add(r2);
}
Complex operator-(const Complex& r1, const Complex& r2)
{
    return r1.subtract(r2);
}
Complex Complex::operator-(const Complex& r2)
{
    return subtract(r2);
}
Complex operator*(const Complex& r1, const Complex& r2)
{
    return r1.multiply(r2);
}
Complex Complex::operator*(const Complex& r2)
{
    return multiply(r2);
}






bool operator<(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) < 0);
}
bool Complex::operator<(const Complex& r2)
{
    return compareTo(r2) < 0;
}
bool operator<=(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) <= 0);
}
bool Complex::operator<=(const Complex& r2)
{
    return compareTo(r2) <= 0;
}
bool operator>(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) > 0);
}
bool Complex::operator>(const Complex& r2)
{
    return compareTo(r2) > 0;
}
bool operator>=(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) >= 0);
}
bool Complex::operator>=(const Complex& r2)
{
    return compareTo(r2) >= 0;
}
bool operator==(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) == 0);
}
bool Complex::operator==(const Complex& r2)
{
    return compareTo(r2) == 0;
}
bool operator!=(const Complex& r1, const Complex& r2)
{
    return (r1.compareTo(r2) != 0);
}
bool Complex::operator!=(const Complex& r2)
{
    return compareTo(r2) != 0;
}

/*
Complex& operator+=(const Complex& secondRational)
{
    *this = add(secondRational);
    return *this;
}
*/
Complex& Complex::operator+=(const Complex& secondRational)
{
    *this = add(secondRational);
    return *this;
}
Complex& Complex::operator-=(const Complex& secondRational)
{
    *this = subtract(secondRational);
    return *this;
}
Complex& Complex::operator*=(const Complex& secondRational)
{
    *this = multiply(secondRational);
    return *this;
}







ostream& operator<<(ostream& out, const Complex& complex)
{
    out << complex.number;
    if (complex.numi >= 0)
        out << "+" << complex.numi;
    else
        out << complex.numi;
    cout << "i";
    /*
    if (complex.numi == 1)
        out << complex.number;
    else
        out << complex.number << "/" << complex.numi;
    */
    return out;
}
istream& operator>>(istream& in, Complex& complex)
{
    //cout << "Enter numerator: ";
    in >> complex.number;

    //cout << "Enter denominator: ";
    in >> complex.numi;
    return in;
}
int& Complex::operator[](int index)
{
    if (index == 0)
        return number;
    if (index == 1)
        return numi;
}
// Define function operators for prefix ++ and --
Complex& Complex::operator++()
{
    number += 1;
    return *this;
}
Complex& Complex::operator--()
{
    number -= 1;
    return *this;
}
// Define function operators for postfix ++ and --
Complex Complex::operator++(int dummy)
{
    Complex temp(number, numi);
    number += 1;
    numi += 1;
    return temp;
}
Complex Complex::operator--(int dummy)
{
    Complex temp(number, numi);
    number -= 1;
    numi -= 1;
    return temp;
}
// Define function operators for unary + and -
Complex Complex::operator+()
{
    return *this;
}
Complex Complex::operator-()
{
    return Complex(-number, -numi);
}


