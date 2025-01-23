#include<iostream>
#include <string>
#include <fstream>
#include "Student.h"
using namespace std;
void displayStudent(const Student& student)
{
	cout << student.getFirstName() << " ";
	cout << student.getMi() << " ";
	cout << student.getLastName() << " ";
	cout << student.getScore() << endl;
}
int main()
{
	ofstream output;
	output.open("Student.txt");
	Student student1("FirstName1", 'A', "LastName1", 10);
	Student student2("FirstName2", 'B', "LastName2", 20);
	Student student3("FirstName3", 'C', "LastName3", 30);
	Student student4("FirstName4", 'D', "LastName4", 40);
	Student student5("FirstName5", 'E', "LastName5", 50);
	Student student[5]= { student1,student2,student3,student4,student5};
	for (int i = 0; i < 5; i++)
	{
		student[i].writeToFile(output);
	}
	output.close();
	Student NewStudent[5];
	ifstream input;
	input.open("Student.txt");
	for (int i = 0; i < 5; i++)
	{
		NewStudent[i].readFromFile(input);
		displayStudent(NewStudent[i]);
	}
	input.close();
}
