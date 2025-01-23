/*
請以分開檔案方式設計類別 StuCard:

StuCard 類別的 data fields(private):
姓名string name、
性別 bool sex、
三科分數double scoreAry[3]。

Student 類別中請設計適當 constructor 和 function:
setName(string)、 setSex(bool)、 setScore(int, double)
getName(): string、 getSex(): bool、 getScore(int): double

然後在物件裡增加readFromFile和writeToFile的功能
以循序文字檔的方式寫入。
資料如下：
Jerry, 1, 80.0, 70.0, 90.0
John, 1, 85.0, 77.0, 95.0
Mary, 0, 83.0, 75.0, 70.0
Tom, 1, 73.0, 95.0, 67.0
Claire, 0, 88.0, 79.0, 71.0

寫入檔案後，檔案資料如下：
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0

輸出說明：
讀取檔案並印出資料

輸出範例：
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
    //讀取的部分
    StuCard studentNew;

    binaryio1.read(reinterpret_cast<char*> (&studentNew), sizeof(studentNew));
    //displayStudent是寫在主程式的print
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

