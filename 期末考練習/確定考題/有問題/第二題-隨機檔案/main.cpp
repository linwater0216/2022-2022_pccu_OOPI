/*

�ХH���}�ɮפ覡�]�p���O Teacher

Teacher ���O�� data fields(private):
�m�W string name�B �~�� int age�B ���Z���� double score

Student ���O���г]�p�A�� constructor �M function:
setName(string)�BsetAge(int)�B setScore(int, double)
getName(): string�BgetAge():int�BgetScore(int): double

�M��b����̼W�[ readFromFile �M writeToFile ���\��
�H�H����r�ɪ��覡�g�J�A�ɮצW�١uTeacher.txt�v�C

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

    Teacher A("AA",1,2.0), B("BB",2,3.0), C("CC",3,4.0), D("DD",4,5.0);
    string a1, a2, a3, a4;
    int b1, b2, b3, b4;
    double c1, c2, c3, c4;
    //cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3 >> a4 >> b4 >> c4;
    //cout <<endl<< a1 << b1 << c1 << endl << a2 << b2 << c2 << endl << a3 << b3 << c3 << endl << a4 << b4 << c4 << endl;
    //A.setName(a1);
    //A.setAge(b1);
    //A.setScore(c1);
    //A.writeToFile(A);
    A.writeToFile(A);
    A.readFromFile();
    //B.setName(a2);
    //B.setAge(b2);
    //B.setScore(c2);
    //B.writeToFile(B);
    //cout << "1";
    A.writeToFile(B);
    A.readFromFile();
    //C.setName(a3);
    //C.setAge(b3);
    //C.setScore(c3);
    //C.writeToFile(C);
    A.writeToFile(C);
    A.readFromFile();
    //D.setName(a4);
    //D.setAge(b4);
    //D.setScore(c4);
    //D.writeToFile(D);
    A.writeToFile(D);
    A.readFromFile();
    
    //C.readFromFile();
    //D.readFromFile();
    return 0;
}