/*
隨機輸入五個整數，輸入進int list[5]，利用int *reverse(int list[], int size)，回傳後輸出。



輸入範例：

1 2 3 4 5

輸出範例：

From: 1, 2, 3, 4, 5
*reverse: 5, 4, 3, 2, 1

*/#include <iostream>
using namespace std;


void reverse(int list[], int size)
{
    int newList[6];
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[i];
    }
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        list[j] = newList[i];
    }
}

void printArray(const int list[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
        if (i < size - 1) {
            cout << " ,";
        }
    }
}

int main()
{
    int a;
    const int SIZE = 5;
    int list[SIZE];
    for (int i = 0; i < 5; i++) {
        cin >> a;
        list[i] = a;
    }
    cout << "From: ";
    printArray(list, SIZE);
    cout << endl;

    reverse(list, SIZE);
    cout << "*reverse: ";
    printArray(list, SIZE);
    cout << endl;

    return 0;
}