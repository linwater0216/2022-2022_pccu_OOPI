#include "AbstractGeometricObject.h"
#include "DerivedCircleFromAbstractGeometricObject.h"
#include "DerivedRectangleFromAbstractGeometricObject.h"
#include <iostream>
using namespace std;

// A function for comparing the areas of two geometric objects
bool equalArea(const GeometricObject& g1,
    const GeometricObject& g2)
{
    return g1.getArea() == g2.getArea();
}

// A function for displaying a geometric object
void displayGeometricObject(const GeometricObject& g)
{
    cout << "���n�O�G" << g.getArea() << endl;
    cout << "�P���O�G" << g.getPerimeter() << endl;
    cout << "�C��O�G" << g.getColor() << endl;
}

int main()
{
    Circle circle(5);
    Rectangle rectangle(5, 3);

    cout << "��W ��T: " << endl;
    displayGeometricObject(circle);

    cout << "\n������ ��T: " << endl;
    displayGeometricObject(rectangle);

    cout << "\n��Ӫ��骺���n�@�˶ܡH" <<
        (equalArea(circle, rectangle) ? "Yes" : "No") << endl;

    return 0;
}