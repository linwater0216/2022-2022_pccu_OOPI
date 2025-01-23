#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;
/*
// A function for comparing the areas of two geometric objects
bool equalArea(const Shape& g1,
    const Shape& g2)
{
    return g1.getArea() == g2.getArea();
}
*/

void display(const Shape& g)
{
    /*
    Triangle
    radius:3.0, area:113.1, volume:113.1, color:red
    Rectangle
    length:5.0, area:150.0, volume:125.0, color:blue
    */
    cout << fixed << setprecision(1) << " area:" << g.getArea() << " color:" << g.getColor() << endl;
}

int main()
{
    string a3 = "string", a5 = "qes";
    double a1 = 3, a2 = 5.0, a4 = 5.0;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    Triangle ball(a1, a2, a3);
    Rectangle cube(a4, a5);
    //cout<< ball.getBase()<<endl;

    cout << fixed << setprecision(1) << "Triangle" << endl << "base:" << ball.getBase() << " height:" << ball.getHeight();
    //<< " area:" << ball.getArea() << " color:" << ball.getColor();
    display(ball);

    cout << fixed << setprecision(1) << "Rectangle" << endl << "edge:" << cube.getEdge();
    //<< " area:" << cube.getArea() << " color:" << cube.getColor();
    display(cube);
    return 0;
}