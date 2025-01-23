#include "Teacher.h"
using namespace std;

Teacher::Teacher()
{
	setName("hi");
	setAge(55);
	setScore(55.0);
}
Teacher::Teacher(string a, int b, double c)
{
	setName(a);
	setAge(b);
	setScore(c);
}
void Teacher::readFromFile()//ÅªÀÉ®×
{
	Teacher a;
	fstream binaryion;
	binaryion.open("Teacher.txt", ios::in);
	binaryion.read(reinterpret_cast<char*> (&a), sizeof(Teacher));
	cout << a.getName() << " " << a.getAge() << " " << fixed << setprecision(1) << a.getScore() << endl;
	//cout << "1";
	binaryion.close();
	/*
	ifstream input("Teacher.txt");
	string n;
	//int b;
	//double c;
	input.eof();
	while (!input.eof())
	{
		getline(input, n, ' ');
		cout << n << " ";//<< fixed << setprecision(1) << s << "" << s1 << "" << s2 << "" << s3 << endl;
	}
	input.close();
*/
}
void Teacher::writeToFile(Teacher a)//¼g¤JÀÉ®×
{
	fstream binaryio;
	binaryio.open("Teacher.txt", ios::out);
	binaryio.write(reinterpret_cast<char*> (&a), sizeof(Teacher));
	binaryio.close();
}

void Teacher::setName(string a)
{
	name = a;
}
void Teacher::setAge(int a)
{
	age = a;
}
void Teacher::setScore(double a)
{
	score = a;
}
string Teacher::getName()
{
	return name;
}
int Teacher::getAge()
{
	return age;
}
double Teacher::getScore()
{
	return score;
}