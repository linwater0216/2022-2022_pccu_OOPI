
#ifndef CIRCLE_H
#define CIRCLE_H

class Rectangle
{
public:
	Rectangle();
	void setWidth(double);//寬度
	double getWidth() const;
	void setHeight(double);//長度
	double getHeight() const;
	double getArea() const;//面積
	static int getNumOfRect();//長方形數量

private:
	double width;//寬度
	double height;//長度
	static int numOfRect;//長方形數量
};

#endif
