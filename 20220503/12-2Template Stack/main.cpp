#include "stack.h"
#include <iostream>
using namespace std;


int main()
{
    char Array[10];
    Stack<char>s;
    cin.getline(Array, 10);
    for (int i = 0; i < 9; i++)
    {
        s.push(Array[i]);
    }
    char b;
    int a, c;
    for (int i = 0; i < 4; i++)
    {
        int x = 0;
        a = s.pop() - '0';
        b = s.pop();
        c = s.pop() - '0';
        switch (b)
        {
        case '-':
            x = c - a;
            break;
        case '+':
            x = c - a;
            break;
        case '*':
            x = c * a;
            break;

        case '/':
            x = c / a;
            break;
        }
        cout << x << endl;
        s.push(char(x + 48));
    }
}
