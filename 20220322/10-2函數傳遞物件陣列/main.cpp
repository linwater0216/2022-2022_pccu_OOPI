#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    Rectangle Rectangle[4];
    Rectangle[0].setWidth(a);
    Rectangle[0].setHeight(b);
    Rectangle[1].setWidth(c);
    Rectangle[1].setHeight(d);
    Rectangle[2].setWidth(e);
    Rectangle[2].setHeight(f);
    Rectangle[3].setWidth(g);
    Rectangle[3].setHeight(h);
    Rectangle[0].sum(Rectangle,4);

    Rectangle[0].printRectangleArray(Rectangle, 4);
    Rectangle[1].printRectangleArray(Rectangle, 4);
    Rectangle[2].printRectangleArray(Rectangle, 4);
    Rectangle[3].printRectangleArray(Rectangle, 4);
    cout << "Total: " << Rectangle[0].getallArea();
    return 0;
}