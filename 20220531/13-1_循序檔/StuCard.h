#ifndef STUCARD_H
#define STUCARD_H
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;

class StuCard
{
private:
    string name;
    bool sex;
    double scoreAry[3];

public:
    StuCard();
    StuCard(string Name, bool sex, double score1, double score2, double score3);
    void setName(string s);
    void setSex(bool a);
    void setScore(int i, double a[]);

    void readFromFile();
    void writeToFile();

    string getName() const;
    bool getSex() const;
    vector<double> getScore() const;

};

#endif
