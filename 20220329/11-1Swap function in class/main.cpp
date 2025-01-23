/*
�H���}�T���ɮ׳]�p Rectangle ����
�����O���]�p�A���غc��
data fields(private) �� width(double)�Bheight(double)
function �� setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea�BswapByReference�BswapByPointer
�аѦҽҥ��d�� TestPointerArgument.cpp �é� swapByReference �P swapByPointer �H this �覡�]�p

��ƦW�ٻP�Φ���
Rectangle::swapByReference(Rectangle &r2)
Rectangle::swapByPointer(Rectangle *r2)

��J�����G
�Ш̧ǿ�J��� width �P height�C

��X�����G
�N��J�� width �P height �إߨ�Ӫ���A�ñN�⪫��Q�� pass-by-reference �H�� pass-by-pointer �H this �覡�i��洫�A�̫��X�C

�d�ҿ�J�G
2.5 3.3 10.5 2.2

�d�ҿ�X(�H���n��X)�G
SwapByReference:8.25 23.10 to 23.10 8.25
SwapByPointer:23.10 8.25 to 8.25 23.10


*/#include "Rectangle.h"
using namespace std;
int main()
{
	double a, b, c, d;
	Rectangle Rectangle1;
	Rectangle Rectangle2;
	Rectangle* r2 = &Rectangle2;
	cin >> a >> b >> c >> d;
	Rectangle1.setWidth(a);
	Rectangle1.setHeight(b);
	Rectangle2.setWidth(c);
	Rectangle2.setHeight(d);
	cout << fixed << setprecision(2) << "SwapByReference:" << Rectangle1.getArea() << " " << Rectangle2.getArea() << " to ";
	Rectangle1.swapByReference(*r2); 
	cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << Rectangle1.getArea() << " " << Rectangle2.getArea() << " to ";
	Rectangle1.swapByPointer(r2);
	cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle2.getArea() << endl;
	
}