/*
�г]�p�@�{���A���ϥΪ̿�J�m�W�B�魫�B�����A�����X�m�W�MBMI�C

BMI = �魫 (����) / (���� * ����) (����)

��J�����G��J�T�ӭȡA���O���m�W(string)�B�魫(double)�B����(double)�A�Ф����Ҽ{�ҥ~���p�C

��X�����G�ھڤW�褽���p�� BMI �ܤp���I��� 2 ��A�æL�X�m�W�PBMI�C

�d�ҿ�J�G���ɤ� 80 1.7

�d�ҿ�X�G���ɤ� 27.68

�� ���ܡG�ϥ� setprecision �]�w�p���I��ơA�æۦ�[�J�һݪ��禡�w�C

*/ 

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string a;
    double bmi,hi,fa;
    cin>>a;
	cin>>fa>>hi;
    bmi=fa/(hi*hi);
    cout<<a<<fixed<<setprecision(2)<<bmi;
    return 0;
}
