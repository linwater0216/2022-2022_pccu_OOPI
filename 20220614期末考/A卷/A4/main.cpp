/*

�ХH���}�ɮפ覡�]�p���O Employee

Employee ���O�� data fields(private):
�m�W string name �B �~�� int age �B ���Z���� double score

Student ���O���г]�p�A�� constructor �M function:
setName(string)�BsetAge(int)�B setScore(double)
getName(): string�BgetAge():int�BgetScore(): double

�M��b����̼W�[ readFromFile �M writeToFile ���\��
�H�`�Ǥ�r�ɪ��覡�g�J�A�ɮצW�١uEmployee.txt�v�C

��J�����G
�п�J�|����ơA�ñN����Ƽg�J�ɮסC

��X�����G
Ū���ɮרæL�X��ơC

��J�d�ҡG
Jerry 58 80.0
John 40 85.0
Mary 39 83.0
Tom 37 73.0

��X�d�ҡG
Jerry 58 80.0
John 40 85.0
Mary 39 83.0
Tom 37 73.0


*/

#include "Employee.h"
using namespace std;


int main()
{

    Employee A, B, C, D;
    string a1 = "A", a2 = "A", a3 = "A", a4 = "A";
    int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
    string c1 = "B", c2 = "B", c3 = "B", c4 = "B";
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3 >> a4 >> b4 >> c4;
    //cout << a1 << b1 << c1 << endl << a2 << b2 << c2 << endl << a3 << b3 << c3 << endl << a4 << b4 << c4 << endl;
    /*
    Jerry 2 2%
    John 4 4%
    Mary 6 1%
    Tom 8 3%
    */
    A.setName(a1);
    A.setSeniority(b1);
    A.setRaise(c1);
    A.writeToFile(A);
    //cout << "1" << endl;
    A.readFromFile();

    B.setName(a2);
    B.setSeniority(b2);
    B.setRaise(c2);
    B.writeToFile(B);

    B.readFromFile();

    C.setName(a3);
    C.setSeniority(b3);
    C.setRaise(c3);
    C.writeToFile(C);

    C.readFromFile();

    D.setName(a4);
    D.setSeniority(b4);
    D.setRaise(c4);
    D.writeToFile(D);

    D.readFromFile();


    return 0;
}