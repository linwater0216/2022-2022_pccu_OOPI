#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

class Teacher
{
private:
    string name;// 姓名 
    int age; //年齡 
    double score;// 考績分數

public:
    Teacher();
    Teacher(string a, int b, double c);
    void readFromFile();//讀
    void writeToFile(Teacher a);//寫
    void setName(string a);
    void setAge(int a);
    void setScore(double a);
    string getName();
    int getAge();
    double getScore();
};

#endif
