/*
計算兩正整數之間 2 或 5 的倍數之「總和」。

輸入說明：輸入 2 個正整數，前者較小、後者較大，請不須考慮例外狀況。

輸出說明：請使用 do while 計算倍數之總和，並印出。

範例輸入：3 97

範例輸出：2850

*/ 

#include <iostream>
using namespace std;
int main(){
	int a=0,i,j;
	cin>>i>>j;
	do{
		if(i%2==0||i%5==0){
			a=a+i;
		}
		i++;
	}while(i<=j);
	cout<<a<<endl;
    return 0;
}
