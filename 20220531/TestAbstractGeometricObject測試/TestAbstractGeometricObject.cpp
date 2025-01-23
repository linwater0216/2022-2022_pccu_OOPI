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
    cout << "面積是：" << g.getArea() << endl;
    cout << "周長是：" << g.getPerimeter() << endl;
    cout << "顏色是：" << g.getColor() << endl;
}

int main()
{
    Circle circle(5);
    Rectangle rectangle(5, 3);

    cout << "圓柱 資訊: " << endl;
    displayGeometricObject(circle);

    cout << "\n長方體 資訊: " << endl;
    displayGeometricObject(rectangle);

    cout << "\n兩個物體的面積一樣嗎？" <<
        (equalArea(circle, rectangle) ? "Yes" : "No") << endl;

    return 0;
}