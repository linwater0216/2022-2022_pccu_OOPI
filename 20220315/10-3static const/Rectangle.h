
#ifndef CIRCLE_H
#define CIRCLE_H

class Rectangle
{
public:
	Rectangle();
	void setWidth(double);//�e��
	double getWidth() const;
	void setHeight(double);//����
	double getHeight() const;
	double getArea() const;//���n
	static int getNumOfRect();//����μƶq

private:
	double width;//�e��
	double height;//����
	static int numOfRect;//����μƶq
};

#endif
