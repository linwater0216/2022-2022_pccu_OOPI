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
        cout << "ball " << a.getVolume() << " == cube " << b.getVolume();
    else
        cout << "ball " << a.getVolume() << " != cube " << b.getVolume();
    
}
void equalPerimeter(const Shape2D& a, const Shape2D& b)//�P���@�˶�?
{
    if (a.getPerimeter() == b.getPerimeter())
        cout << "circle " << a.getPerimeter() << " == rectangle " << b.getPerimeter();
    else
        cout << "circle " << a.getPerimeter() << " != rectangle " << b.getPerimeter();
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
    cout << fixed << setprecision(2) << g.getColor() << ", " << g.getArea() << endl;
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
    Circle circle(5,"yellow");
    Rectangle rectangle(3,4,"red");
    Ball ball(5,"blue");
    Cube cube(4,"black");
    cout << fixed << setprecision(0) << "circle, "<<circle.getRadius()<<", ";
    display(circle);
    cout << fixed << setprecision(0) << "rectangle, " << rectangle.getWidth() << ", " << rectangle.getLength() << ", ";
    display(rectangle);
    cout << fixed << setprecision(0) << "ball, " << ball.getRadius() << ", ";
    display(ball);
    cout << fixed << setprecision(0) << "cube, " << cube.getLength() << ", ";
    display(cube);
    equalPerimeter(circle, rectangle);
    cout << endl;
    equalVolume(ball, cube);
    cout << endl;
    //cout << circle.getRadius() << " " << circle.getColor();
    return 0;
}