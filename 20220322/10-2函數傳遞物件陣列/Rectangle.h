#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
private:
	double width;//寬度
	double height;//長度
public:
	void setWidth(double);//寬度
	double getWidth() const;
	void setHeight(double);//長度
	double getHeight() const;
	double getArea() const;//面積
	double getallArea()const;
	static int numOfArea;
	void sum(Rectangle rectArray[], int size);
	void printRectangleArray(Rectangle rectArray[], int size)const;
};
#endif