/*

�ХH���}�ɮפ覡�]�p�T���O Shape�BSphere�BCuboid
�䤤 Sphere(�y��)�BCuboid(������)���~�� Shape

Shape ���O�� data fields(private):
�C�� string color

Sphere ���O�� data fields(private):
�b�| double radius

Cuboid ���O�� data fields(private):
�� double length �B�e double width �B�� double height

�мg�X�A���غc�̡Bset �禡�Bget �禡�Y�i
�t�~�A�C�����O������ toString()�A�^�� class �W�٧Y�i
�ç�������n getVolume()�\��
Sphere ����n 4/3�kr^3�ACuboid ����n L*W*H

��J�����G
�D�{���п�J 6 �ӭȥH�إ߲y�骫��P�ߤ��骫��C

��X�����G
�g�L�p���A���ӿ�X�d�Ү榡�i���X�C

��J�d�ҡG
5 yellow 3 4 5 green

��X�d�ҡG
Sphere:(5),523.6,yellow
Cuboid:(3,4,5),60.0,green


�� �Ъ`�N�G�p�� PI�A�Ъ����ϥ� 3.14159 �Y�i


*/

#include "Shape.h"
#include "Sphere.h"//�y
#include "Cuboid.h"
#include <iostream>
using namespace std;

// A function for displaying a geometric object
void displayGeometricObject(const Shape& A)
{
    cout << ", area:" << A.getArea() << ", volume:" << A.getVolume() << ", color:" << A.getColor() << endl;
}

int main()
{
    double a1, b2, b3, b4;
    string a3, a4;
    cin >> a1 >> a3 >> b2 >> b3 >> b4 >> a4;
    Sphere ba(a1,a3);
    Cuboid cu(b2,b3,b4,a4);

    cout <<fixed<<setprecision(0) << "Sphere:(" << ba.getRadius() << fixed << setprecision(1) << ")," << ba.getVolume()<<","<<ba.getColor()<<endl;
    cout << fixed << setprecision(0) << "Cuboid:(" << cu.getLength() <<","<<cu.getwidth()<<","<<cu.getheight() << fixed << setprecision(1) << ")," << cu.getVolume() << "," << cu.getColor()<<endl;
    return 0;
}