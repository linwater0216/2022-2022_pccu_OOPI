/*
�]�m�����ܼ� int *gList

�Q�Ψ禡int *reverse(const int list[], int size)������

�A�Q��void print(const int list[], int size)����X�C



���{�u�i�]�ߤ@�Ӱ}�C�A���i�Q�βĤG�Ӱ}�C�x�s����᪺�}�C�C

print�����Q�Φ�}��@��X�C



���ܡG

print����int list[]�A�i�bmain�禡�إߤ@��*pList����m�A�Ƕi�h�Y�i�C




��J�����G

��J���ӼƦr�A��*reverse������A�A��print����X�C



��J�d�ҡG

1 3 5 7 9 10



��X�d�ҡG

10, 9, 7, 5, 3, 1

*/#include <iostream>
using namespace std;

int* gList;
int* reverse(int* list, int size)
{
    int a;
    for (int i = 0, j = size - 1; i < 3; i++, j--)
    {
        a = list[i];
        list[i] = list[j];
        list[j] = a;
    }
    return list;
}

void printArray(const int* list, int size)
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
    int list[6];
    for (int i = 0; i < 6; i++) {
        cin >> list[i];
    }
    gList = reverse(list, 6);
    printArray(gList, 6);

}