/*

請以分開檔案方式設計三類別 Shape、Sphere、Cuboid
其中 Sphere(球體)、Cuboid(長方體)皆繼承 Shape

Shape 類別的 data fields(private):
顏色 string color

Sphere 類別的 data fields(private):
半徑 double radius

Cuboid 類別的 data fields(private):
長 double length 、寬 double width 、高 double height

請寫出適當的建構者、set 函式、get 函式即可
另外，每個類別內都有 toString()，回傳 class 名稱即可
並完成算體積 getVolume()功能
Sphere 的體積 4/3πr^3，Cuboid 的體積 L*W*H

輸入說明：
主程式請輸入 6 個值以建立球體物件與立方體物件。

輸出說明：
經過計算後，按照輸出範例格式進行輸出。

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
    Sphere ba(a1,a3);
    Cuboid cu(b2,b3,b4,a4);

    cout <<fixed<<setprecision(0) << "Sphere:(" << ba.getRadius() << fixed << setprecision(1) << ")," << ba.getVolume()<<","<<ba.getColor()<<endl;
    cout << fixed << setprecision(0) << "Cuboid:(" << cu.getLength() <<","<<cu.getwidth()<<","<<cu.getheight() << fixed << setprecision(1) << ")," << cu.getVolume() << "," << cu.getColor()<<endl;
    return 0;
}