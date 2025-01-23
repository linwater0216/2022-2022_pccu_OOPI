/*
�аѦҨ�ӽҥ��d��:
TestCircleWithStaticDataFields.cpp
CircleWithConstantMemberFunctions.cpp

�åH���}�T���ɮת��覡�N�� Circle ����ק令 Rectangle ����A�� Rectangle �㦳 const �M static �\��C
data fields(private) �� width(double)�Bheight(double)�BnumOfRect(int)
�H�νг]�p�غc�̩M function: setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea�BgetNumOfRect


��J�����G
��D�{������J 3 �ժ��P�e�A�إ� 3 �� Rectangle ����

��X�����G
�̫��X�U�Ӫ���Ϊ��y�e(width)�z�B�y��(height)�z�B�y���n�z�B�y�`�@���X�Ӫ���Ρz�C

�d�ҿ�J�G
1 2 2 3 3 4

�d�ҿ�X�G
1 2 2
2 3 6
3 4 12
3 Rectangles



�� �n�D�Gint numOfRect ����������Ϊ��Ӽƻݨ㦳 static �\��AgetNumOfRect()�]���㦳 static �\��A�� getWidth()�B getHeight()�BgetArea() �ݨ㦳 const�C

*/#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
public:
    double width;//�e��
    double height;//����
    double getArea()//���n
    {
        return width * height;
    }
    double getPerimeter()//�P��
    {
        return (width + height) * 2;
    }
};

int main()
{
    Rectangle Rectangle1;
    Rectangle Rectangle2;
    Rectangle Rectangle3;
    cin >> Rectangle1.width >> Rectangle1.height;
    cin >> Rectangle2.width >> Rectangle2.height;
    cout << fixed << setprecision(2) << Rectangle1.getArea() << Rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << Rectangle2.getArea() << Rectangle2.getPerimeter() << endl;
    Rectangle2.width = 5.0;
    Rectangle2.height = 2.5;
    cout << Rectangle2.getArea() << Rectangle2.getPerimeter() << endl;
    return 0;
}
