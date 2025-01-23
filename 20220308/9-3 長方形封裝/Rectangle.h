#ifndef Rectangle_h
#define Rectangle_h
class Rectangle
{
private:
    double width;//寬度
    double height;//高度
    
public:
    double getArea();//面積
    double getPerimeter();//周長
    void setWidth(double);
    void setHeight(double);
};
#endif