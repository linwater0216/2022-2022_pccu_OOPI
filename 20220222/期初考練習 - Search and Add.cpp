/*
���@��ư}�C�� {3, 5, 7, 2, 4, 8, 6}�A�åH��ƦW�١Gint LinearComp(int number, int array[], int size) �����A��X�}�C�����J�Ʀr�j���ƥ[�`�C

��J�����G��J�@��ơA�N�}�C����ӼƦr�j���ƥ[�`(���]�t���)�C

��X�����G��X�[�`�᪺�Ʀr�C

�d�ҿ�J�G4

�d�ҿ�X�G26

�� �d�Ҥ��� 4 �j���Ʀr�� 5�B7�B8�B6�A�G�[�`�ᬰ 26


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
