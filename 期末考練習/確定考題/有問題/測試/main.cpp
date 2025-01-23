#include "Teacher.h"
using namespace std;

void displayTeacher(const Teacher& student)
{
    cout << student.getname() << " ";
    cout << student.getAge() << " ";
    cout <<fixed<<setprecision(1) << student.getScore() << endl;
    //cout << "1";
}

int main()
{
    fstream binaryio; // Create stream object
    binaryio.open("Teacher.bin", ios::out | ios::binary);
    /*
    for (int i = 0; i < 10; i++) {
        Teacher student1("FirstName1", 'A', "LastName1", 10*i);
    }
    */
    string a1, a2, a3, a4;
    int b1, b2, b3, b4;
    double c1, c2, c3, c4;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3 >> a4 >> b4 >> c4;
    Teacher student1(a1,b1, c1);
    Teacher student2(a2, b2, c2);
    Teacher student3(a3, b3, c3);
    Teacher student4(a4, b4, c4);
    binaryio.write(reinterpret_cast<char*> (&student1), sizeof(Teacher));
    binaryio.write(reinterpret_cast<char*> (&student2), sizeof(Teacher));
    binaryio.write(reinterpret_cast<char*> (&student3), sizeof(Teacher));
    binaryio.write(reinterpret_cast<char*> (&student4), sizeof(Teacher));

    binaryio.close();

    //讀取資料
    binaryio.open("Teacher.bin", ios::in | ios::binary);

    Teacher studentNew;

    //binaryio.seekg(2 * sizeof(Teacher));//從頭開始第幾個

    //cout << "Current position is " << binaryio.tellg() << endl;//tellg告訴我g的指標位子
    
    binaryio.read(reinterpret_cast<char*> (&studentNew), sizeof(Teacher));
    displayTeacher(studentNew);
    binaryio.read(reinterpret_cast<char*> (&studentNew), sizeof(Teacher));
    displayTeacher(studentNew);
    binaryio.read(reinterpret_cast<char*> (&studentNew), sizeof(Teacher));
    displayTeacher(studentNew);
    binaryio.read(reinterpret_cast<char*> (&studentNew), sizeof(Teacher));
    displayTeacher(studentNew);
    binaryio.close();
    //cout << "Current position is " << binaryio.tellg() << endl;
    //cout << "1";
    
}