/*
設置全域變數 int *gList

利用函式int *reverse(const int list[], int size)做反轉

再利用void print(const int list[], int size)做輸出。



全程只可設立一個陣列，不可利用第二個陣列儲存反轉後的陣列。

print必須利用位址當作輸出。



提示：

print中的int list[]，可在main函式建立一個*pList的位置，傳進去即可。




輸入說明：

輸入六個數字，用*reverse左反轉，再用print做輸出。



輸入範例：

1 3 5 7 9 10



輸出範例：

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