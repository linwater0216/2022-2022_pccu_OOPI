/*

�ХH���}�ɮפ覡�]�p���O Teacher

Teacher ���O�� data fields(private):
�m�W string name �B �~�� int age �B ���Z���� double score

Student ���O���г]�p�A�� constructor �M function:
setName(string)�BsetAge(int)�B setScore(double)
getName(): string�BgetAge():int�BgetScore(): double

�M��b����̼W�[ readFromFile �M writeToFile ���\��
�H�`�Ǥ�r�ɪ��覡�g�J�A�ɮצW�١uTeacher.txt�v�C

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

#include "Teacher.h"
using namespace std;


int main()
{
    
    Teacher A, B, C, D;
    string a1="A", a2 = "A", a3 = "A", a4 = "A";
    int b1=0, b2=0, b3=0, b4=0;
    double c1 = 0.0, c2 = 0.0, c3 = 0.0, c4=0.0;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3 >> a4 >> b4 >> c4;
    //cout << a1 << b1 << c1 << endl << a2 << b2 << c2 << endl << a3 << b3 << c3 << endl << a4 << b4 << c4 << endl;
    A.setName(a1);
    A.setAge(b1);
    A.setScore(c1);
    A.writeToFile(A);
    //cout << "1" << endl;
    //A.readFromFile();

    B.setName(a2);
    B.setAge(b2);
    B.setScore(c2);
    B.writeToFile(B);
    
    //B.readFromFile();

    C.setName(a3);
    C.setAge(b3);
    C.setScore(c3);
    C.writeToFile(C);
   
    //C.readFromFile();

    D.setName(a4);
    D.setAge(b4);
    D.setScore(c4);
    D.writeToFile(D);
    
    D.readFromFile();
    

    return 0;
}