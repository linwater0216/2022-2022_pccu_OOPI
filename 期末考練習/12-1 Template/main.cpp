#include <iostream>
#include <string>
using namespace std;
template<typename T>
int BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    return -1;
}

template<typename T>
void InsertionSort(T list[], int listSize)
{
    for (int i = 0; i < listSize; i++)
    {
        // Find the minimum in the list[i..listSize-1]
        T currentMin = list[i];
        int currentMinIndex = i;

        for (int j = i + 1; j < listSize; j++)
        {
            if (currentMin > list[j])
            {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }

        // Swap list[i] with list[currentMinIndex] if necessary;
        if (currentMinIndex != i)
        {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}
template<typename T>
void printArray(const T list[], int listSize)
{
    for (int i = 0; i < listSize; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main(){
    const int size = 9;
    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    int i1, i2, i3;
    double d1, d2, d3;
    cin >> i1 >> i2 >> i3 >> d1 >> d2 >> d3;
    cout << "From: ";
    for (int i = 0;i < size;i++){
        cout << list1[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    InsertionSort(list1, size);
    cout << "To: ";
    for (int i = 0;i < size;i++){
        cout << list1[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    cout << i1 << " at " << BinarySearch(list1, i1, size) << endl;
    cout << i2 << " at " << BinarySearch(list1, i2, size) << endl;
    cout << i3 << " at " << BinarySearch(list1, i3, size) << endl;
    cout << endl;
    cout << "From: ";
    for (int i = 0;i < size;i++){
        cout << list2[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    InsertionSort(list2, size);
    cout << "To: ";
    for (int i = 0;i < size;i++){
        cout << list2[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    cout << d1 << " at " << BinarySearch(list2, d1, size) << endl;
    cout << d2 << " at " << BinarySearch(list2, d2, size) << endl;
    cout << d3 << " at " << BinarySearch(list2, d3, size) << endl;
    return 0;
}