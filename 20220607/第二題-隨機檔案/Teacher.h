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
    string name;// �m�W 
    int age; //�~�� 
    double score;// ���Z����

public:
    Teacher();
    Teacher(string a, int b, double c);
    void readFromFile();
    void writeToFile(Teacher a);
    void setName(string a);
    void setAge(int a);
    void setScore(double a);
    string getName();
    int getAge();
    double getScore();
};

#endif
