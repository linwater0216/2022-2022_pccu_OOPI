#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
//#include "cstring"
using namespace std;

class Employee
{
private:
    /*
    string name;// 姓名
    int age; //年齡
    double score;// 考績分數
    */

    char name[20] = {0};//姓名
    int seniority;//年資
    char raise[20] = {0};//調薪
public:
    Employee();
    Employee(string a, int b, string c);

    void readFromFile();
    void writeToFile(Employee a);
    /*
    void setName(string a);
    void setAge(int a);
    void setScore(double a);
    string getName();
    int getAge();
    double getScore();
    */
    void setName(const string a);
    void setSeniority(int a);
    void setRaise(const string a);
    string getName();
    int getSeniority();
    string getRaise();
};

#endif
