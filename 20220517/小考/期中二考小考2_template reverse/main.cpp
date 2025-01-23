#include <iostream>
#include <string>
using namespace std;

// newList is the reversal of list
template <typename T>
void reverse(const T list[], T newList[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newList[j] = list[i];
    }
}

template <typename T>
void printArray(const T list[], int size)
{
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}

int main()
{
    const int SIZE = 6;
    double list1[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
    string list2[] = { "a", "b", "c", "d", "e", "f" };
    double newList1[6];
    string newList2[6];

    
    cout << "The original array: ";
    printArray(list2, 6);
    cout << endl;
    cout << "The reversed array: ";
    reverse(list2, newList2, 6);
    printArray(newList2, 6);
    cout << endl;

    cout << "The original array: ";
    printArray(list1, 6);
    cout << endl;
    cout << "The reversed array: ";
    reverse(list1, newList1, 6);
    printArray(newList1, 6);
    cout << endl;



    return 0;
}