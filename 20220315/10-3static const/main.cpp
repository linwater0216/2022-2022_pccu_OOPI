/*�аѦҨ�ӽҥ��d��:
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
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Rectangle Rectangle[3];
    Rectangle[0].setWidth(a);
    Rectangle[0].setHeight(b);
    Rectangle[1].setWidth(c);
    Rectangle[1].setHeight(d);
    Rectangle[2].setWidth(e);
    Rectangle[2].setHeight(f);
    cout << Rectangle[0].getWidth() << " " << Rectangle[0].getHeight() << " " << Rectangle[0].getArea() << endl;

    cout << Rectangle[1].getWidth() << " " << Rectangle[1].getHeight() << " " << Rectangle[1].getArea() << endl;

    cout << Rectangle[2].getWidth() << " " << Rectangle[2].getHeight() << " " << Rectangle[2].getArea() << endl;

    
    cout << Rectangle[3].getNumOfRect() << " Rectangles";
        return 0;
}