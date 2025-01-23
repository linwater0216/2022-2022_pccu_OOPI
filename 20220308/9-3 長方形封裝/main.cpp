/*�ӤW�D
�г]�p�@�����Rectangle�ʸ˪���
�N����Ϊ�data fields�令private
data fields(private) : double width, double height
�ç��� getArea()�BgetPerimeter() ��ӭ즳�禡
�A�W�[2��set function�G
void setWidth(double)
void setHeight(double)

�O�o�ޤJ.h���Y�ɡA�æb.h�ɤ��קK�h�����J

��J�����G�D�{������J2�ժ���Ϊ����e�@���غc2�Ӫ���Ϊ��󪺰ѼơA�A�N�ĤG�Ӫ���Ϊ����אּ5.0�B�e�אּ2.5�C

��X�����G�Ĥ@��P�ĤG���X�쥻2�Ӫ���Ϊ����n�M�P���A�ĤT���X�ĤG�Ӫ���έק�᪺���n�M�P���C

�d�ҿ�J�G
6.9 7.2 9.1 5.6

�d�ҿ�X�G
49.68 28.20
50.96 29.40
12.50 15.00

�� ���n�P�P���Ҩ��ܤp���I��ĤG��*/
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle Rectangle1;
    Rectangle Rectangle2;
    double a1, a2;
    cin >> a1 >> a2;
    Rectangle1.setWidth(a1);
    Rectangle1.setHeight(a2);
    cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle1.getPerimeter() << endl;
    cin >> a1 >> a2;
    Rectangle2.setWidth(a1);
    Rectangle2.setHeight(a2);


    cout << fixed << setprecision(2) << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    Rectangle2.setWidth(5.0);
    Rectangle2.setHeight(2.5);
    cout << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    return 0;
}