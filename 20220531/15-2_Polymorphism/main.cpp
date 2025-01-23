/*
續上題，請參考課本範例:
TestAbstractGeometricObject.cpp

撰寫一個主程式的函式display(GeometricObject &)，
裡面要包含getVolume，getArea，getColor。
此題必須使用抽象(abstract)類別和函數，請使用virtual完成。

輸入說明：
輸入半徑、顏色建立1個Ball物件，
再輸入邊長、顏色建立1個Cube物件

輸出說明：
依照範例輸出，利用display函式分別輸出Ball及Cube的各項資料


範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***提示：「area:113.1, volume:113.1, color:red 」在display完成

*/

#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(const GeometricObject& A)
{
    cout << "radius:" << A.getlength() << ", area:" << A.getArea() << ", volume:" << A.getvolume() << ", color:" << A.getColor() << endl;
}

int main()
{
    double a1, a2;
    string a3, a4;
    cin >> a1 >> a3 >> a2 >> a4;
    Ball ba;
    ba.setlength(a1);
    ba.setColor(a3);
    Cube cu;
    cu.setlength(a2);
    cu.setColor(a4);

    cout << "Ball" << endl;
    displayGeometricObject(ba);
    cout << "Cube" << endl;
    displayGeometricObject(cu);

    return 0;
}