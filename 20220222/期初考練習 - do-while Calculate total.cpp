/*
�p��⥿��Ƥ��� 2 �� 5 �����Ƥ��u�`�M�v�C

��J�����G��J 2 �ӥ���ơA�e�̸��p�B��̸��j�A�Ф����Ҽ{�ҥ~���p�C

��X�����G�Шϥ� do while �p�⭿�Ƥ��`�M�A�æL�X�C

�d�ҿ�J�G3 97

�d�ҿ�X�G2850

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
