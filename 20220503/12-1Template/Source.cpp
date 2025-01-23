/*
* 
將兩個函式改成template(T) 接納多種型別
然後主程式將矩陣經過 InsertionSort 排序後
再用 BinarySearch 找資料位置。

原來 list1[]={1,5,6,2,3,7,9,8,4}
經排序 list1[]={1,2,3,4,5,6,7,8,9}

原來list2[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4}
經排序 list2[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9}

輸入說明：
輸入6個數，前3個數請在list1中分別找到各自的索引值，後3個數請在list2中分別找到各自的索引值。

輸出說明：
依照範例輸出兩個list排序前後的內容，然後找出索引值，假設找不到將會回傳 -1。

範例輸入：
3 8 10
3.3 8.8 9.8

範例輸出：
From: 1,5,6,2,3,7,9,8,4
To: 1,2,3,4,5,6,7,8,9
3 at 2
8 at 7
10 at -1

From: 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4
To: 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9
3.3 at 2
8.8 at 7
9.8 at -1

*/
#include <iostream>
using namespace std;

template<class T>
void InsertionSort(T list[], T listSize)
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

template<class T>
int BinarySearch(const T list[], int key, T listSize)
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

int main()
{
    const int SIZE1 = 10;
    const int SIZE2 = 18;
    int list1[SIZE1] = { 1,5,6,2,3,7,9,8,4 };
    int list2[SIZE2] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    int newlist1[SIZE1] = { 1,2,3,4,5,6,7,8,9 };
    int newlist2[SIZE2] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
    cout << "From: ";
    for (int i = 0; i < SIZE1; i++) {
        cout << list1[i];
    };
    InsertionSort(list1[], SIZE1);
    cout << "To: ";
    for (int i = 0; i < SIZE1; i++) {
        cout << list1[i];
    };

    cout << endl << endl;


    cout << "From: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << list2[i];
    };
    InsertionSort(list1[], SIZE1);
    cout << "To: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << list2[i];
    };
    cout << endl;

    return 0;
}



//別人檔案

#include <iostream>
using namespace std;
template<typename T>
void InsertionSort(T list[], int listSize) {
    for (int i = 1; i < listSize; i++) {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--) {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}
template<typename T>
int BinarySearch(const T list[], T key, int listSize) {
    int low = 0;
    int high = listSize - 1;

    while (high >= low) {
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
int main() {
    const int size = 9;
    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    int i1, i2, i3;
    double d1, d2, d3;
    cin >> i1 >> i2 >> i3 >> d1 >> d2 >> d3;
    cout << "From: ";
    for (int i = 0; i < size; i++) {
        cout << list1[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    InsertionSort(list1, size);
    cout << "To: ";
    for (int i = 0; i < size; i++) {
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
    for (int i = 0; i < size; i++) {
        cout << list2[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << endl;
    InsertionSort(list2, size);
    cout << "To: ";
    for (int i = 0; i < size; i++) {
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