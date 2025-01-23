/*

請以分開檔案方式設計類別 Employee

Employee 類別的 data fields(private):
姓名 string name 、 年齡 int age 、 考績分數 double score

Student 類別中請設計適當 constructor 和 function:
setName(string)、setAge(int)、 setScore(double)
getName(): string、getAge():int、getScore(): double

然後在物件裡增加 readFromFile 和 writeToFile 的功能
以循序文字檔的方式寫入，檔案名稱「Employee.txt」。

輸入說明：
請輸入四筆資料，並將此資料寫入檔案。

輸出說明：
讀取檔案並印出資料。

輸入範例：
Jerry 58 80.0
John 40 85.0
Mary 39 83.0
Tom 37 73.0

輸出範例：
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