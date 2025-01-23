/*

�]�p3�h���~�ӡG
�Ĥ@�hShape�A
�ĤG�hShape2D, Shape3D�A
�ĤT�hCircle, Rectangle�~��Shape2D�ABall, Cube(�ߤ���)�~��Shape3D�A
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2�A
�C��class�����ۤv��toString�C
Shape�p�P�ҥ���GeometricObject, �A�W�[getArea��H��ơA
Shape2D��getPerimeter��H��ơA
Shape3D��getVolume��H��ơC
�b�D�{���Ѧҵ{��15.19 TestAbstractGeometricObject.cpp����
equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)�������getColor, toString�MgetArea

�D�{������
Circle circle(5,\"yellow\",1);
Rectangle rectangle(3, 4,\"red\",0);
Ball ball(5,\"blue\",1);
Cube cube(4,\"black\",0);
�Hdisplay���, �M��P�_circle �Mrectangle�g���O�_�۵��Aball�Mcube��n�O�_�۵��C

�d�ҿ�X�G
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
void equalVolume(const Shape3D& a, const Shape3D& b)//��n�@�˶�
{
    if (a.getVolume() == b.getVolume())
        cout << a.getVolume() << "==" << a.getVolume();
    else
        cout << a.getVolume() << "!=" << a.getVolume();
    
}
void equalPerimeter(const Shape2D& a, const Shape2D& b)//�P���@�˶�?
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
void equalArea(const Shape& g1, const Shape& g2)//���n�B���n�@�˶�?
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