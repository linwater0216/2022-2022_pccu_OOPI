/*

設計3層的繼承：
第一層Shape，
第二層Shape2D, Shape3D，
第三層Circle, Rectangle繼承Shape2D，Ball, Cube(立方體)繼承Shape3D，
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2，
每個class都有自己的toString。
Shape如同課本的GeometricObject, 再增加getArea抽象函數，
Shape2D有getPerimeter抽象函數，
Shape3D有getVolume抽象函數。
在主程式參考程式15.19 TestAbstractGeometricObject.cpp完成
equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)完成顯示getColor, toString和getArea

主程式完成
Circle circle(5,\"yellow\",1);
Rectangle rectangle(3, 4,\"red\",0);
Ball ball(5,\"blue\",1);
Cube cube(4,\"black\",0);
以display顯示, 然後判斷circle 和rectangle週長是否相等，ball和cube體積是否相等。

範例輸出：
circle, 5, yellow, 78.54
rectangle, 3, 4, red, 12.00
ball, 5, blue, 314.16
cube, 4, black, 96.00
circle 31.42 != rectangle 14.00
ball 523.60 != cube 64.00


*/
#include "Rectangle.h"
#include "Circle.h"
#include "Cube.h"
#include "Ball.h"
using namespace std;
void equalVolume(const Shape3D& a, const Shape3D& b)//體積一樣嗎
{
    if (a.getVolume() == b.getVolume())
        cout << a.getVolume() << "==" << a.getVolume();
    else
        cout << a.getVolume() << "!=" << a.getVolume();
    
}
void equalPerimeter(const Shape2D& a, const Shape2D& b)//周長一樣嗎?
{
    if (a.getPerimeter() == b.getPerimeter())
        cout << a.getPerimeter() << "==" << b.getPerimeter();
    else
        cout << a.getPerimeter() << "!=" << b.getPerimeter();
}
void display(const Shape& g)//cout
{
    /*
    circle, 5, yellow, 78.54
    rectangle, 3, 4, red, 12.00
    ball, 5, blue, 314.16
    cube, 4, black, 96.00
    circle 31.42 != rectangle 14.00
    ball 523.60 != cube 64.00
    */

    cout << g.getColor() << g.getArea();
}
void equalArea(const Shape& g1, const Shape& g2)//面積、表面積一樣嗎?
{
    if (g1.getArea() == g2.getArea())
        cout << g1.getArea() << "==" << g2.getArea();
    else
        cout << g1.getArea() << "!=" << g2.getArea();
}


int main()
{
    /*
    circle, 5, yellow, 78.54
    rectangle, 3, 4, red, 12.00
    ball, 5, blue, 314.16
    cube, 4, black, 96.00
    circle 31.42 != rectangle 14.00
    ball 523.60 != cube 64.00
    */
    Circle cc;
    Rectangle rr;
    Ball ball1;
    Cube cube1;
    ball1.setColor("blue");
    cc.setRadius(5);
    rr.setLength(3);
    rr.setWidth(4);
    ball1.setRadius(5);
    cube1.setLength(4);

    return 0;
}