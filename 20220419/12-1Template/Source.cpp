/*
* 
�N��Ө禡�令template(T) ���Ǧh�ث��O
�M��D�{���N�x�}�g�L InsertionSort �Ƨǫ�
�A�� BinarySearch ���Ʀ�m�C

��� list1[]={1,5,6,2,3,7,9,8,4}
�g�Ƨ� list1[]={1,2,3,4,5,6,7,8,9}

���list2[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4}
�g�Ƨ� list2[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9}

��J�����G
��J6�ӼơA�e3�ӼƽЦblist1�����O���U�۪����ޭȡA��3�ӼƽЦblist2�����O���U�۪����ޭȡC

��X�����G
�̷ӽd�ҿ�X���list�Ƨǫe�᪺���e�A�M���X���ޭȡA���]�䤣��N�|�^�� -1�C

�d�ҿ�J�G
3 8 10
3.3 8.8 9.8

�d�ҿ�X�G
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

void InsertionSort(int list[], int listSize)//�Ƨ�
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

int BinarySearch(const int list[], int key, int listSize)
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

    return 0;
}