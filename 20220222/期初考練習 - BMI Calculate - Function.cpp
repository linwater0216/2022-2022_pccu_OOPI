/*
�г]�p�@�{���A���ϥΪ̿�J�m�W�B�魫�B�����A����z�L�禡�p����X�m�W�MBMI�C

BMI = �魫 (����) / (���� * ����) (����)

��J�����G��J�T�ӭȡA���O���m�W(string)�B�魫(double)�B����(double)�A�Ф����Ҽ{�ҥ~���p�C

��X�����G�Q�� Function �]�p�A�禡�W�٬� double BMI(double, double)�A�ھڤW�褽���p�� BMI �ܤp���I��� 2 ��A�æL�X�m�W�PBMI�C

�d�ҿ�J�G���ɤ� 80 1.7

�d�ҿ�X�G���ɤ� 27.68

�� ���ܡG�ϥ� setprecision �]�w�p���I��ơA�æۦ�[�J�һݪ��禡�w�C

*/ 

#include <iostream>
#include <iomanip>
using namespace std;
double BMI(double fa,double hi){
	double bmi;
	bmi=fa/(hi*hi);
	return bmi;
} 
int main(){
	string a;
    double bmi,hi,fa;
    cin>>a;
	cin>>fa>>hi;
    cout<<a<<fixed<<setprecision(2)<<BMI(fa,hi);
    return 0;
}
