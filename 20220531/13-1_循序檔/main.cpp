/*
�ХH���}�ɮפ覡�]�p���O StuCard:

StuCard ���O�� data fields(private):
�m�Wstring name�B
�ʧO bool sex�B
�T�����double scoreAry[3]�C

Student ���O���г]�p�A�� constructor �M function:
setName(string)�B setSex(bool)�B setScore(int, double)
getName(): string�B getSex(): bool�B getScore(int): double

�M��b����̼W�[readFromFile�MwriteToFile���\��
�H�`�Ǥ�r�ɪ��覡�g�J�C
��Ʀp�U�G
Jerry, 1, 80.0, 70.0, 90.0
John, 1, 85.0, 77.0, 95.0
Mary, 0, 83.0, 75.0, 70.0
Tom, 1, 73.0, 95.0, 67.0
Claire, 0, 88.0, 79.0, 71.0

�g�J�ɮ׫�A�ɮ׸�Ʀp�U�G
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0

��X�����G
Ū���ɮרæL�X���

��X�d�ҡG
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0


*/

#include "StuCard.h"
using namespace std;
/*
void displayStudent(const StuCard& student)
{
    cout << student.getName() << " ";
    cout << student.getSex() << " ";
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout <<fixed<<setprecision(1) << student.getScore().at(i) << " ";
    }
}
*/

int main()
{
    //ofstream binaryio; // Create stream object
    //binaryio.open("student.dat", ios::out | ios::binary);
    //vector<double> aa1 = { 80.0, 70.0, 90.0 };

    StuCard a1("Jerry", 1, 80.0, 70.0, 90.0);
    StuCard a2("John", 1, 85.0, 77.0, 95.0);
    StuCard a3("Mary", 0, 83.0, 75.0, 70.0);
    StuCard a4("Tom", 1, 73.0, 95.0, 67.0);
    StuCard a5("Claire", 0, 88.0, 79.0, 71.0);
    //cout<<sizeof(a1);
    a1.writeToFile();
    a1.readFromFile();

    a2.writeToFile();
    a2.readFromFile();

    a3.writeToFile();
    a3.readFromFile();

    a4.writeToFile();
    a4.readFromFile();

    a5.writeToFile();
    a5.readFromFile();


    /*
    binaryio.write(reinterpret_cast<char*> (&a1), sizeof(a1));
    binaryio.write(reinterpret_cast<char*> (&a2), sizeof(a2));
    binaryio.write(reinterpret_cast<char*> (&a3), sizeof(a3));
    binaryio.write(reinterpret_cast<char*> (&a4), sizeof(a4));
    binaryio.write(reinterpret_cast<char*> (&a4), sizeof(a5));

    binaryio.close();

    ifstream binaryio1;
    binaryio1.open("student.dat", ios::in | ios::binary);
    //Ū��������
    StuCard studentNew;

    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    //displayStudent�O�g�b�D�{����print
    displayStudent(studentNew);
    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    displayStudent(studentNew);
    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    displayStudent(studentNew);
    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    displayStudent(studentNew);
    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    displayStudent(studentNew);

    binaryio1.close();
    */
    return 0;
}

