#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
private:
	double width;//�e��
	double height;//����
public:
	void setWidth(double);//�e��
	double getWidth() const;
	void setHeight(double);//����
	double getHeight() const;
	double getArea() const;//���n
	double getallArea()const;
	static int numOfArea;
	void sum(Rectangle rectArray[], int size);
	void printRectangleArray(Rectangle rectArray[], int size)const;
};
#endif