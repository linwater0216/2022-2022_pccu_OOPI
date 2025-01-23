/*
�إߤ@��int list1[10], double list2[10]�A�s��U��J10�ӼƦr�A���O����ƤίB�I�ơA��X�ɽФ���C

�Q�� void reverse(const int list[], int newList[], int size)������

�A�Q��void print(int list[], int size)��X�C

�N�禡�令template(T) ���Ǧh�ث��O�C






�d�ҿ�J�G

80 45 65 75 85 95 80 33 45 11

30.7 25.8 60.9 51.4 77.7 40.7 98.9 58.6 41.5 99.9



��X�G

From: 80, 45, 65, 75, 85, 95, 80, 33, 45, 11
To: 11, 45, 33, 80, 95, 85, 75, 65, 45, 80

From: 30.7, 25.8, 60.9, 51.4, 77.7, 40.7, 98.9, 58.6, 41.5, 99.9
To: 99.9, 41.5, 58.6, 98.9, 40.7, 77.7, 51.4, 60.9, 25.8, 30.7


*/#include <iostream>
using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newList[j] = list[i];
    }
}
template<typename T>
void printArray(const T list[], int size)
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
    double b;
    int list1[10];
    double list2[10];
    int newList1[10];
    double newList2[10];
    for (int i = 0; i < 10; i++) {
        cin >> a;
        list1[i] = a;
    }
    for (int i = 0; i < 10; i++) {
        cin >> b;
        list2[i] = b;
    }

    reverse(list1, newList1, 10);
    reverse(list2, newList2, 10);
    cout << "From: ";
    printArray(list1, 10);
    cout << endl;
    cout << "To: ";
    printArray(newList1, 10);
    cout << endl;
    cout << "From: ";
    printArray(list2, 10);
    cout << endl;
    cout << "To: ";
    printArray(newList2, 10);
    cout << endl;
    return 0;
}