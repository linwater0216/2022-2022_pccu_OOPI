#include "Employee.h"
using namespace std;

Employee::Employee()
{
}
Employee::Employee(string a, int b, string c)
{
	setName(a);
	setSeniority(b);
	setRaise(c);
}
void Employee::setName(const string a)
{
	strcpy_s(name, a.c_str());
}
void Employee::setSeniority(int a)
{
	seniority = a;
}
void Employee::setRaise(const string a)
{
	strcpy_s(raise, a.c_str());
}
string Employee::getName()
{
	return string(name);
}
int Employee::getSeniority()
{
	return seniority;
}
string Employee::getRaise()
{
	return string(raise);
}

void Employee::writeToFile(Employee a)//¼g¤JÀÉ®×
{
	//fstream binaryio;
	//binaryio.open("Employee.txt", ios::out);
	//binaryio.write(reinterpret_cast<char*> (&a), sizeof(Employee));
	//binaryio.close();

	ofstream write;
	write.open("Employee.txt", ios::out);
	write << name << ", " << seniority << ", " << fixed << setprecision(1) << raise << endl;
	write.close();
}
void Employee::readFromFile()//ÅªÀÉ®×
{
	Employee a;
	fstream binaryion1;
	binaryion1.open("Employee.txt", ios::in);
	binaryion1.read(reinterpret_cast<char*> (&a), sizeof(Employee));
	cout << fixed << setprecision(1) << name << " " << seniority << " " << raise << endl;
	binaryion1 << fixed << setprecision(1) << a.getName() << " "<< a.getSeniority() << " " << a.getRaise() << endl;
	binaryion1.close();
	/*
	ifstream input("Employee.txt");
	string n;
	int b;
	double c;
	//input.eof();
	while (!input.eof())
	{
		getline(input, n, ' ');
		cout << n << " ";//<< fixed << setprecision(1) << s << "" << s1 << "" << s2 << "" << s3 << endl;
	}
	input.close();
	*/
}
/*


void Employee::setName(string a)
{
	name = a;
}
void Employee::setAge(int a)
{
	age = a;
}
void Employee::setScore(double a)
{
	score = a;
}
string Employee::getName()
{
	return name;
}
int Employee::getAge()
{
	return age;
}
double Employee::getScore()
{
	return score;
}
*/