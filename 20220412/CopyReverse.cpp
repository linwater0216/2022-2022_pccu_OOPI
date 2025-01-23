#include <iostream>
using namespace std;

// newList is the reversal of list
void reverse(const int list[], int newList[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newList[j] = list[i];
    }
}

void printArray(const int list[], int size)
{
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}
//////////////////////////
void InsertionSort(int list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        int currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}
/////////////////////////
int main()
{
	const int SIZE = 6;
    int list[] = { 1, 4, 3, 2, 5, 6 };
    int newList[SIZE];

    reverse(list, newList, SIZE);

    cout << "The original array: ";
    printArray(list, SIZE);
    cout<<endl;
    
    InsertionSort(list,SIZE);
    cout << "排序後: ";
    printArray(list, SIZE);
    cout << endl;

    cout << "The reversed array: ";
    printArray(newList, SIZE);
    cout << endl;
    
    InsertionSort(newList,SIZE);
    cout << "排序後: ";
    printArray(newList, SIZE);
    cout << endl;

    return 0;
}
