#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"

using namespace std;

// A function for comparing the areas of two geometric objects
bool equalArea(const GeometricObject& g1,
    const GeometricObject& g2)
{
    return g1.getArea() == g2.getArea();
}

// A function for displaying a geometric object
void display(const GeometricObject& g)
{
    /*
    Ball
    radius:3.0, area:113.1, volume:113.1, color:red
    Cube
    length:5.0, area:150.0, volume:125.0, color:blue
    */
    cout << fixed << setprecision(1) << ", area:" << g.getArea() << ", volume:" << g.getVolume() << ", color:" << g.getColor() << endl;
}

int main()
{
    string a2="string", a4="qes";
    double a1=3, a3=4.0;
    cin >> a1 >> a2 >> a3 >> a4;
    Ball ball(a1, a2);
    Cube cube(a3, a4);

    cout << fixed << setprecision(1) << "Ball" << endl << "radius:" << ball.getRadius();
    display(ball);

    cout << fixed << setprecision(1) << "Cube" << endl << "length:" << cube.getLength();
    display(cube);
    return 0;
}