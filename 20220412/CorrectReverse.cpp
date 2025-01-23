#include <iostream>
using namespace std;

// newList is the reversal of list
int* reverse(int list[], int size)
{
    int* newList=new int[6];
    for (int i = 0; i < size; i++)
      {
    newList[i]=list[i];
      }
      for (int i = 0, j = size - 1; i < size; i++, j--)
      {
    newList[j] = list[i];
      }
      return newList;
}

void printArray(const int list[], int size)
{
  for (int i = 0; i < size; i++)
    cout << list[i] << " ";
}



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



int main()
{
  	const int SIZE = 6;
  	int list[] = {1, 6, 3, 4, 2, 5};
  	
  	cout << "The original array: ";
  	printArray(list, SIZE);
  	cout << endl;
  	
  	InsertionSort(list,SIZE);
    cout << "排序後: ";
    printArray(list, SIZE);
    cout << endl;
  	

  	cout << "The reversed array: ";
  	printArray(reverse(list, SIZE), SIZE);
  	cout << endl;
  	
  	InsertionSort(reverse(list, SIZE),SIZE);
    cout << "排序後: ";
    printArray(reverse(list, SIZE), SIZE);
    cout << endl;

  	return 0;
}
