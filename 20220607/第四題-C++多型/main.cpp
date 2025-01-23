/*
����ĤT�D
�b�D�{�����g�@�Ө禡 display(Shape &)
�̭��ݩI�s toString(), getVolume()�AgetColor()
���D�����A��ϥ� virtual ������H(abstract)��ơC

��J�����G
�D�{���п�J 6 �ӭȥH�إ߲y�骫��P�ߤ��骫��

��X�����G
�g�L�p���A�D�{���z�L display �禡�A���ӿ�X�d�Ү榡�i���X�C

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

void display(const Shape& g)
{
    cout << fixed << setprecision(1) << ")," << g.getVolume() << "," << g.getColor() << endl;
}


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
    Sphere ba(a1, a3);
    Cuboid cu(b2, b3, b4, a4);

    cout << fixed << setprecision(0) << "Sphere:(" << ba.getRadius();
    display(ba);
    cout << fixed << setprecision(0) << "Cuboid:(" << cu.getLength() << "," << cu.getwidth() << "," << cu.getheight();
    display(cu);
    return 0;
}