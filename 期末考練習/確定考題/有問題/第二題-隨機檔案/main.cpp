/*

請以分開檔案方式設計類別 Teacher

Teacher 類別的 data fields(private):
姓名 string name、 年齡 int age、 考績分數 double score

Student 類別中請設計適當 constructor 和 function:
setName(string)、setAge(int)、 setScore(int, double)
getName(): string、getAge():int、getScore(int): double

然後在物件裡增加 readFromFile 和 writeToFile 的功能
以隨機文字檔的方式寫入，檔案名稱「Teacher.txt」。

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