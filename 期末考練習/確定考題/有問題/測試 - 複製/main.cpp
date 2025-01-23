
#include "Teacher.h"
using namespace std;
void displayTeacher(const Teacher& student)
{
	/*
	cout << student.getFirstName() << " ";
	cout << student.getMi() << " ";
	cout << student.getLastName() << " ";
	cout << student.getScore() << endl;
	*/
}
int main()
{
	ofstream output;
	
	string a[4];
	int b[4];
	double c[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}
	Teacher student1(a[0], b[0],c[0]);
	Teacher student2(a[1], b[1], c[1]);
	Teacher student3(a[2], b[2], c[2]);
	Teacher student4(a[3], b[3], c[3]);
	Teacher student[5] = { student1,student2,student3,student4};
	output.open("Teacher.txt");
	for (int i = 0; i < 4; i++)
	{
		student[i].writeToFile(output);
	}
	output.close();
	
	Teacher NewTeacher[5];
	ifstream input;
	input.open("Teacher.txt");
	//cout << "1";
	for (int i = 0; i < 4; i++)
	{
		NewTeacher[i].readFromFile(input);
		displayTeacher(NewTeacher[i]);
	}
	input.close();
}