#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Teacher
{
public:
    Teacher();
    Teacher(const string& firstName,int age, double score);
    void setname(const string& s);
    //void setMi(char mi);
    //void setLastName(const string& s);
    void setScore(double score);
    void setAge(int a);

    int getAge() const;
    string getname() const;
    //char getMi() const;
    //string getLastName() const;
    double getScore() const;
private:
    string name;
    int age;
    double score;

    //char firstName[25];
    //char mi;
    //char lastName[25];
    //int score;
};

#endif
