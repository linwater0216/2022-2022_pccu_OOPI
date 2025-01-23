/*
��W�D�A�аѦҽҥ��d��:
TestAbstractGeometricObject.cpp

���g�@�ӥD�{�����禡display(GeometricObject &)�A
�̭��n�]�tgetVolume�AgetArea�AgetColor�C
���D�����ϥΩ�H(abstract)���O�M��ơA�Шϥ�virtual�����C

��J�����G
��J�b�|�B�C��إ�1��Ball����A
�A��J����B�C��إ�1��Cube����

��X�����G
�̷ӽd�ҿ�X�A�Q��display�禡���O��XBall��Cube���U�����


�d�ҿ�J�G
3 red 5 blue

�d�ҿ�X�G
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***���ܡG�uarea:113.1, volume:113.1, color:red �v�bdisplay����

*/

#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(const GeometricObject& A)
{
    cout << "radius:" << A.getlength() << ", area:" << A.getArea() << ", volume:" << A.getvolume() << ", color:" << A.getColor() << endl;
}

int main()
{
    double a1, a2;
    string a3, a4;
    cin >> a1 >> a3 >> a2 >> a4;
    Ball ba;
    ba.setlength(a1);
    ba.setColor(a3);
    Cube cu;
    cu.setlength(a2);
    cu.setColor(a4);

    cout << "Ball" << endl;
    displayGeometricObject(ba);
    cout << "Cube" << endl;
    displayGeometricObject(cu);

    return 0;
}