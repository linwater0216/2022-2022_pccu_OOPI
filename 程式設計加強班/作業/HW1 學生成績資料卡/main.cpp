/*
���@�ǥͪ���ƥdclass StuCard,
������즳
�m�Wstring name,
�ʧO bool sex�A
�T�����double scoreAry[3],
�ͤ�Date birthDay(���~)�C

1.�Ч��������O����ơG
�غc�̡B
setName(string), setSex(bool), setScore(int, double), setDate(int, int, int)�AsetDate(Date)
getName(): string, getSex(): bool, getScore(int): double, Date getDate()
average(): double�p��T�쥭��
getAge(int): int �p��~�� (�u�ݦ~���Ҽ{���)
printCard(): void�C�L�ӤH��Ʀp�U�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, aver:80.0, age: 20

2. �D�{�������@�Ө�ƭn�p��C�쪺����double* classAver(StuCard[], int)

3.�b�D�{�����إ�4�ӤH���
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997
John, 1, 85.0, 77.0, 95.0, 5/20/1995
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003
�M���J�@�խӤH��ƫإ߲�5�ӤH
�̫�z�LprintCard()��X

�d�ҿ�J�G
Claire 0 88.0 79.0 71.0 9 1 2000

�d�ҿ�X�G
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 21
John, 1, 85.0, 77.0, 95.0, 5/20/1995, 85.7, 23
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007, 76.0, 11
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003, 78.3, 15
Claire, 0, 88.0, 79.0, 71.0, 9/1/2000, 79.3, 18
Average: 81.8, 79.2, 78.6

p.s:��e�~���Х�2020
*/

#include <iostream>
#include "StuCard.h"
using namespace std;
double classAver(StuCard a[5], int b) 
{
    double t=0;
    for(int i=0;i<5;i++)
    {
        t = t + a[i].getScore(b);
    }
    return t/5;
}

int main()
{
    StuCard student[5];
    string a;
    bool b;
    double c, d, e;
    int day, mon, year;
    cin >> a >> b >> c >> d >> e >> day >> mon >> year;
    student[0].setName("Jerry");
    student[0].setSex(1);
    student[0].setScore(0, 80.0);
    student[0].setScore(1, 70.0);
    student[0].setScore(2, 90.0);
    student[0].setDate(20, 3, 1997);

    student[1].setName("John");
    student[1].setSex(1);
    student[1].setScore(0, 85.0);
    student[1].setScore(1, 77.0);
    student[1].setScore(2, 95.0);
    student[1].setDate(20, 5, 1995);

    student[2].setName("Mary");
    student[2].setSex(0);
    student[2].setScore(0, 83.0);
    student[2].setScore(1, 75.0);
    student[2].setScore(2, 70.0);
    student[2].setDate(18, 2, 2007);

    student[3].setName("Tom");
    student[3].setSex(1);
    student[3].setScore(0, 73.0);
    student[3].setScore(1, 95.0);
    student[3].setScore(2, 67.0);
    student[3].setDate(8, 11, 2003);

    student[4].setName(a);
    student[4].setSex(b);
    student[4].setScore(0, c);
    student[4].setScore(1, d);
    student[4].setScore(2, e);
    student[4].setDate( mon,day, year);
    student[0].printCard();
    student[1].printCard();
    student[2].printCard();
    student[3].printCard();
    student[4].printCard();
    cout << "Average: " << classAver(student, 0) << ", " << classAver(student, 1) << ", " << classAver(student, 2) << endl;
    cout << endl;
    return 0;
}