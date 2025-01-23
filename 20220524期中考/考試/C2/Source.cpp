/*

請使用Template撰寫函式vectorMultiply(vector v1,vector v2) ,print(vector>)

vectorMultiply => 讓其中v1 與v2 的元素依序相乘，並回傳相加後的二維vector陣列

print =>把二維Vector中的元素依序輸出

輸入說明:

先輸入5個整數 輸入兩組，再輸入5個浮點數 輸入兩組

輸出說明:

輸出相乘後的整數與浮點數的二維陣列資料



範例輸入:

72 14 17 79 67
92 95 67 40 88
84.82 63.82 64.01 24.38 80.89
62.49 6.67 97.45 20.59 49.24

範例輸出:

1674 6510 4092 4929 3348
162 630 396 477 324
738 2870 1804 2173 1476
1026 3990 2508 3021 2052
450 1750 1100 1325 900
373.053 3752.48 5291.44 3848.84 9297.7
344.197 3462.22 4882.14 3551.13 8578.52
142.48 1433.19 2020.96 1469.99 3551.08
212.939 2141.91 3020.35 2196.92 5307.13
296.808 2985.54 4209.97 3062.21 7397.43


*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<typename T>
vector<T> z1;
template<typename T>
vector<T> z2;


template<typename T>
T vectorMultiply(vector<T> v1, vector<T> v2)
{
    for (int i = 0; i < 5; i++)
    {
        vector<int>z1;
        for (int j = 0; j < 5; i++)
        {
            z1.push_back(v1.at(i) * v2.at(j));
        }
        z2.push_back(z1);
    }
    return 0;
};

template<typename T>
void print()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << z2[i][j];
        }
        cout << endl;
    }
};

template<typename T>
int main()
{
    
    vector<T> v1;
    vector<T> v2;
    T a;
    for (int i = 0; i < 5; i++) 
    {
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    print();
    return 0;
}