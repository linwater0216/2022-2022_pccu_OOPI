/*
請以分開三個檔案方式設計一類別 Complex
根據需求建立適當的建構子

data fields(private): intNumber:int、complexNumber:int

四個 function:
Complex substract(Complex) -> (a+bi)-(c+di) = ((a-c)+(b-d)i)
Complex multiply(Complex) ->(a+bi)×(c+di)=(ac−bd)+(bc+ad)i
Complex power(int exponent) ->(a+bi)^index
string toString() -> 輸出格式 (a+bi)

輸入說明：
主程式輸入5整數，建構2組物件comp1, comp2，第五個數字輸入次方數字。

輸出說明：
請以function方式計算(comp1-comp2)^index並輸出。
(comp1.substract(comp2)).power(exponent)

範例輸入：
1 0 -3 1 2

範例輸出：
((1+0i)-(-3+1i))^2=(15-8i)


※ Complex 輸出格式中間一律以『+』表示。

※ 輸出答案遇到負數則不用『+』表示


※ 如果i為負數，則用-i表示
錯誤例子: (1+-2i)
正確例子: (1-2i)

*/
#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    // Create and initialize two rational numbers r1 and r2.
    Rational r1(4, 2);
    Rational r2(2, 3);
    cout<<"單純加減乘除" << endl;
    // Test toString, add, subtract, multiply, and divide
    cout << r1.toString() << " + " << r2.toString() << " = "
        << r1.add(r2).toString() << endl;
    cout << r1.toString() << " - " << r2.toString() << " = "
        << r1.subtract(r2).toString() << endl;
    cout << r1.toString() << " * " << r2.toString() << " = "
        << r1.multiply(r2).toString() << endl;
    cout << r1.toString() << " / " << r2.toString() << " = "
        << r1.divide(r2).toString() << endl;
    cout <<"整數部分以及分數部分分別顯示" << endl;//分行

    // Test intValue and double
    cout << "r2.intValue()" << " is " << r2.intValue() << endl;
    cout << "r2.doubleValue()" << " is " << r2.doubleValue() << endl;

    cout <<"是否相等" << endl;//分行
    // Test compareTo and equal
    cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
    cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
    cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;

    cout <<"以上面的數字傳回true or false" << endl;//分行
    cout << "r1.equals(r1) is "
        << (r1.equals(r1) ? "true" : "false") << endl;
    cout << "r1.equals(r2) is "
        << (r1.equals(r2) ? "true" : "false") << endl;

    return 0;
}