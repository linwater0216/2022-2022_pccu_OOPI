/*
接續第三題
在主程式撰寫一個函式 display(Shape &)
裡面需呼叫 toString(), getVolume()，getColor()
此題必須適當使用 virtual 完成抽象(abstract)函數。

輸入說明：
主程式請輸入 6 個值以建立球體物件與立方體物件

輸出說明：
經過計算後，主程式透過 display 函式，按照輸出範例格式進行輸出。

輸入範例：
5 yellow 3 4 5 green

輸出範例：
Sphere:(5),523.6,yellow
Cuboid:(3,4,5),60.0,green


※ 請注意：計算 PI，請直接使用 3.14159 即可

*/
#include "Shape.h"
#include "Sphere.h"//球
#include "Cuboid.h"
#include <iostream>

void display(const Shape& g)
{
    cout << fixed << setprecision(1) << ")," << g.getVolume() << "," << g.getColor() << endl;
}


using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(const Shape& A)
{
    cout << ", area:" << A.getArea() << ", volume:" << A.getVolume() << ", color:" << A.getColor() << endl;
}

int main()
{
    double a1, b2, b3, b4;
    string a3, a4;
    cin >> a1 >> a3 >> b2 >> b3 >> b4 >> a4;
    Sphere ba(a1, a3);
    Cuboid cu(b2, b3, b4, a4);

    cout << fixed << setprecision(0) << "Sphere:(" << ba.getRadius();
    display(ba);
    cout << fixed << setprecision(0) << "Cuboid:(" << cu.getLength() << "," << cu.getwidth() << "," << cu.getheight();
    display(cu);
    return 0;
}