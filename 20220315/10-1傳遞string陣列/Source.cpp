/*��J�@�r��ñN���ഫ��stringstream�i��r����ΡA�v���s�J�@��string�}�C��(string word[10])�A�M��v����X�A��X�\��n�g�� printStringArray(string word[], int size)�A�̫�ݨϥ� string �� length() �\���X���r�ꪺ����(�]�t�ť�)

��J�����G
��J�@�r��(�����i��|�H�ťչj�}��r)�óv���s�J�@��string�}�C

��X�����G
�v����Xstring�}�C�A�̫��X���r�ꪺ����(�]�t�ť�)

�d�ҿ�J�G
Programming is fun

�d�ҿ�X�G
Programming
is
fun
Length:18


�� �аѦҽҥ��d�� ExtractWords.cpp
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray(string word1[], int size) {
	for (int i = 0; i <= size; i++) {
		cout << word1[i] << endl;
	}
}

int main()
{
	int t = 0;
	string word1;
	int size = 10;
	getline(cin,word1);
	stringstream ss(word1);

	string word[10];
	while (!ss.eof()) {
		ss >> word[t];
		t++;
	}
	printStringArray(word, t);
	cout << "Length" << ":" << word1.length();
	return 0;
}