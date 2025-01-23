#include "StuCard.h"

using namespace std;

// Construct a default student
StuCard::StuCard()
{
}
StuCard::StuCard(string Name,bool sex, double score1,double score2, double score3)
{
	setName(Name);
	setSex(sex);
	scoreAry[0] = score1;
	scoreAry[1] = score2;
	scoreAry[2] = score3;

}
void StuCard::readFromFile()
{
	ifstream input("textToWrite.txt");
	string n;
	char b;
	bool s;
	double s1, s2, s3;
	while (!input.eof())
	{
		getline(input, n, ',');
		cout << n;//<< fixed << setprecision(1)<くs<く""<くs1<<""<<s2 <<"" << s3 << endl;
	}
	input.close();
}

/*
void StuCard::readFromFile() 
{
	ifstream input("StuCard.dat", ios::out | ios::binary);
	string n;
	bool s=0;
	double s1=0, s2=0, s3=0;
	while (!input.eof())
	{
		getline(input, n, ',');
		cout << n;//<< fixed << setprecision(1)<くs<く""<くs1<<""<<s2 <<"" << s3 << endl;
	}
		
	StuCard StuCardNew;
	input.read(reinterpret_cast<char*> (&StuCardNew), sizeof());
	
	cout << n << " " << s << " " << s1 << " " << s2 << " " << s3 << endl;//<< fixed << setprecision(1)<くs<く""<くs1<<""<<s2 <<"" << s3 << endl;
	input.close();
}
*/


void StuCard::writeToFile()
{
	ofstream write;
	write.open("textToWrite.txt");
	write << name << ", " << sex << ", " << fixed << setprecision(1)<< scoreAry[0] << ", "<< scoreAry[1] <<", " << scoreAry[2] << endl;
	write.close();
}



void StuCard::setName(string s)
{
	name = s;
}
void StuCard::setSex(bool a)
{
	sex = a;
}
void StuCard::setScore(int i, double a[])
{
	for (i=0; i < 3; i++) {
		scoreAry[i] = a[i];
	}
}
string StuCard::getName() const
{
	return name;
}
bool StuCard::getSex() const
{
	return sex;
}
vector<double> StuCard::getScore()  const
{
	vector<double> a;
	for (int i = 0; i < 3; i++) {
		a.push_back(scoreAry[i]);
	}
	return a;
}