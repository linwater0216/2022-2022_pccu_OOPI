#include <iostream>
#include <sstream>
#include <string>
#include<vector>
using namespace std;
void printStringArray(string word[], int size) {
    for (int i = 0; i < size; i++) {
        cout << word[i] << endl;
    }
}
int main() {
    string a("PCCU");
    string b("CSIE");
    string text;
    string word[10];
    int size = 10;
    getline(cin, text);

    text.insert(text.find(a) + 4, b);
    stringstream ss(text);

    cout << text << endl;
    string w;
    while (!ss.eof())
    {
        int i = 0;
        ss >> word[i];
        printStringArray(word, i + 1);
        i++;
    }
    return 0;
}