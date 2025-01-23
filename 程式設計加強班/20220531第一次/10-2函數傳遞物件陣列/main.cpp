#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double a[4], b[4], c, d, e, f, g, h;
    Rectangle Rectangle[4];
    for(int i=0;i<4;i++)
    {
        cin >> a[i] >> b[i];
        Rectangle[i].setWidth(a[i]);
        Rectangle[i].setHeight(b[i]);
        Rectangle[i].printRectangleArray(Rectangle, 4);
    }
    cout << "Total: " << Rectangle[0].sum(Rectangle,4);
    return 0;
}