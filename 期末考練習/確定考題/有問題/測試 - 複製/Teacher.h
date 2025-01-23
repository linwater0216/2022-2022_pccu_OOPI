#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <cstring>
#include <fstream>
#include<iostream>
#include <string>
#include <fstream>
using namespace std;

class Teacher
{
public:
    Teacher();
    Teacher(const string& name, int age, double score);
    void setFirstName(const string& s);
    void setMi(char mi);
    void setLastName(const string& s);
    //void setScore(int score);
    string getFirstName() const;
    char getMi() const;
    string getLastName() const;
    //int getScore() const;

    void setName(const string& a);
    void setAge(int a);
    void setLScore(double a);

    string setName();
    int setAge();
    double setLScore();


    void writeToFile(ofstream& out);
    void readFromFile(ifstream& in);

private:
    string name;
    int age;
    double score;
    char firstName[25];
    char mi;
    char lastName[25];
    //int score;
};

#endif
