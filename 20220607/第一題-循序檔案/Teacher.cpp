#include "Teacher.h"
using namespace std;

Teacher::Teacher()
{
	setName("hi");
	setAge(0);
	setScore(0.0);
}
Teacher::Teacher(string a,int b,double c)
{
	setName(a);
	setAge(b);
	setScore(c);
}
void Teacher::writeToFile(Teacher a)//寫入檔案
{
	//fstream binaryio;
	//binaryio.open("Teacher.txt", ios::out);
	//binaryio.write(reinterpret_cast<char*> (&a), sizeof(Teacher));
	//binaryio.close();

	ofstream write;
	write.open("textToWrite.txt");
	write << name << ", " << age << ", " << fixed << setprecision(1) << score <<  endl;
	write.close();
}
void Teacher::readFromFile()//讀檔案
{
	//Teacher a;
	//fstream binaryion1;
	//binaryion1.open("Teacher.txt", ios::in);
	//binaryion1.read(reinterpret_cast<char*> (&a), sizeof(Teacher));
	//binaryion1 << fixed << setprecision(1) << a.getName() << " " << a.getAge() << " " << a.getScore() << endl;
	//binaryion1.close();

	ifstream input("Teacher.txt");
	string n;
	int b;
	double c;
	input.eof();
	while (!input.eof())
	{
		getline(input, n, ' ');
		cout << n<<" ";//<< fixed << setprecision(1) << s << "" << s1 << "" << s2 << "" << s3 << endl;
	}
	input.close();
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