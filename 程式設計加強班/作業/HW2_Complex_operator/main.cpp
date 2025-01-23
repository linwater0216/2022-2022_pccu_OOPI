/*

以一般function: add, subtract, multiply, toString和建構者Complex(), Complex(a,b)
陸續完成+, -, *,<<和>>,[],+=,-=,*=和左右++, --, 正負號+,-
修改主程式完成first＝(3+4i)+(2-4i)*(3-i), second=(4+3i)-(5+6i) ,並計算++first 和--second

<<：輸出答案
>>：輸入2數分別更改實數及虛數
[]：[0]取得實數、[1]取得虛數
+：1*(a+bi)
-：-1*(a+bi)

範例輸出：
first=5-10i
second=-1-3i
++first=6-10i
--second=-2-3i

*/
#include "Complex.h"
using namespace std;

int main()
{
    // Create and initialize two rational numbers r1 and r2.
    Complex r1(6, -4);
    Complex r2(2, 3);
    Complex first;
    Complex first1;
    Complex first2;
    Complex first3;

    Complex second;
    Complex second1;
    Complex second2;
    // Test toString, add, subtract, multiply, and divide
    first1.setNumber(3);
    first1.setNumi(4);
    first2.setNumber(2);
    first2.setNumi(-4);
    first3.setNumber(3);
    first3.setNumi(-1);

    second1.setNumber(4);
    second1.setNumi(3);
    second2.setNumber(5);
    second2.setNumi(6);

    first = first1+ first2* first3;
    second = second1 - second2;
    cout << "first=" << first << endl;
    cout << "second=" << second << endl;
    first = ++first;
    second = --second;
    cout << "++first=" << first << endl;
    cout << "--second=" << second << endl;
    /*
    cout << "+的部分" << endl;
    cout << r1 << " + " << r2.toString() << " = " << r1.add(r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << (r1 + r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << operator+(r1, r2).toString() << endl;
    cout << r1.toString() << " + " << r2.toString() << " = " << r1.operator+(r2).toString() << endl;
    cout << "-的部分" << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << r1.subtract(r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << (r1 - r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << operator-(r1, r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = " << r1.operator-(r2).toString() << endl;
    cout << "*的部分" << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << r1.multiply(r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << (r1 * r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << operator*(r1, r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = " << r1.operator*(r2).toString() << endl;
    cout << "以上完成測試" << endl;

    // Test intValue and double
    cout << "r2.intValue()" << " is " << r2.intValue() << endl;
    cout << "r2.doubleValue()" << " is " << r2.doubleValue() << endl;

    // Test compareTo and equal
    cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
    cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
    cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;
    cout << "r1.equals(r1) is " << (r1.equals(r1) ? "true" : "false") << endl;
    cout << "r1.equals(r2) is " << (r1.equals(r2) ? "true" : "false") << endl;
    cout << "以下測試<" << endl;
    cout << ((r1 < r2) ? "true" : "false") << endl;
    cout << (operator<(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator<(r2) ? "true" : "false") << endl;
    cout << "以下測試<=" << endl;
    cout << ((r1 <= r2) ? "true" : "false") << endl;
    cout << (operator<=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator<=(r2) ? "true" : "false") << endl;
    cout << "以下測試>" << endl;
    cout << ((r1 > r2) ? "true" : "false") << endl;
    cout << (operator>(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator>(r2) ? "true" : "false") << endl;
    cout << "以下測試>=" << endl;
    cout << ((r1 >= r2) ? "true" : "false") << endl;
    cout << (operator>=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator>=(r2) ? "true" : "false") << endl;
    cout << "以下測試==" << endl;
    cout << ((r1 == r2) ? "true" : "false") << endl;
    cout << (operator==(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator==(r2) ? "true" : "false") << endl;
    cout << "以下測試!=" << endl;
    cout << ((r1 != r2) ? "true" : "false") << endl;
    cout << (operator!=(r1, r2) ? "true" : "false") << endl;
    cout << (r1.operator!=(r2) ? "true" : "false") << endl;
    */
    return 0;
}