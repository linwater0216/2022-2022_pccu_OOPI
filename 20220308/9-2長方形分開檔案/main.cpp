/*�ӤW�D
�ХH���}�ɮפ覡�]�p�@�����Rectangle����
data fields(public) : double width, double height
�ç��� getArea()�BgetPerimeter() ��Ө禡
�O�o�ޤJ.h���Y�ɡA�æb.h�ɤ��קK�h�����J

��J�����G�D�{������J2�ժ���Ϊ����e�@���غc2�Ӫ���Ϊ��󪺰ѼơA�A�N�ĤG�Ӫ���Ϊ����אּ5.0�B�e�אּ2.5�C

��X�����G�Ĥ@��P�ĤG���X�쥻2�Ӫ���Ϊ����n�M�P���A�ĤT���X�ĤG�Ӫ���έק�᪺���n�M�P���C

�d�ҿ�J�G
6.9 7.2 9.1 5.6

�d�ҿ�X�G
49.68 28.20
50.96 29.40
12.50 15.00

�� ���n�P�P���Ҩ��ܤp���I��ĤG��
*/#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle Rectangle1;
    Rectangle Rectangle2;
    Rectangle Rectangle3;
    cin >> Rectangle1.width >> Rectangle1.height;
    cin >> Rectangle2.width >> Rectangle2.height;
    cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    Rectangle2.width = 5.0;
    Rectangle2.height = 2.5;
    cout << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    return 0;
}