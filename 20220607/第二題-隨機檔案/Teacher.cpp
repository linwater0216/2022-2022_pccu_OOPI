#include "Teacher.h"
using namespace std;

Teacher::Teacher()
{
	setName("hi");
	setAge(0);
	setScore(0.0);
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
	binaryion.open("Teacher.txt", ios::in | ios::out);
	binaryion.read(reinterpret_cast<char*> (&a), sizeof(Teacher));
	cout << a.getName() << " " << a.getAge() << " " << fixed << setprecision(1) << a.getScore() << endl;
	binaryion.close();

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