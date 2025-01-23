/*
有一整數陣列為 {3, 5, 7, 2, 4, 8, 6}，並以函數名稱：int LinearComp(int number, int array[], int size) 完成，找出陣列中比輸入數字大的數加總。

輸入說明：輸入一整數，將陣列中比該數字大的數加總(不包含原數)。

輸出說明：輸出加總後的數字。

範例輸入：4

範例輸出：26

※ 範例中比 4 大的數字為 5、7、8、6，故加總後為 26


*/ 

#include <iostream>
#include <iomanip>
using namespace std;
int LinearComp(int number, int array[], int size){
	int a=0;
	for(int i=0;i<7;i++){
		if(array[i]>number){
			a=a+array[i];
		}
	}
	return a;
}
int main(){
    int number;
	int size=7;
	int array[]={3,5,7,2,4,8,6};
	cin>>number;
    cout<<LinearComp(number,array,size)<<endl;
    return 0;
}
