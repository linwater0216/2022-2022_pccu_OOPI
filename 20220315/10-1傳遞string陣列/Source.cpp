/*輸入一字串並將其轉換為stringstream進行字串分割，逐項存入一維string陣列中(string word[10])，然後逐項輸出，輸出功能要寫成 printStringArray(string word[], int size)，最後需使用 string 的 length() 功能輸出此字串的長度(包含空白)

輸入說明：
輸入一字串(中間可能會以空白隔開文字)並逐項存入一維string陣列

輸出說明：
逐項輸出string陣列，最後輸出此字串的長度(包含空白)

範例輸入：
Programming is fun

範例輸出：
Programming
is
fun
Length:18


※ 請參考課本範例 ExtractWords.cpp
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