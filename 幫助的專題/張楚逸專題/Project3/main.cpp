#include<iostream>
#include<iomanip>
#include "situation.h"
using namespace std;


int main() {
    
    situation a[13];                                                                                    //�ɶ�����
    for (int j = 1; j <= 12; j++) {
        int month;
        cout << "�п�J�O�b�����: ";
        cin >> month;


        int salary, otherincome;                                                                    //���J
        int monthlyinTotal = 0;
        cout << "�п�J�Ӥ��~�ꦬ�J: ";
        cin >> salary;
        cout << "�п�J�Ӥ�Q�ʦ��J: ";
        cin >> otherincome;
        monthlyinTotal = salary + otherincome;

        a[j].setincome(monthlyinTotal);

        cout << fixed << setprecision(2);
        cout << "-------------------------------------------\n";
        cout << "�A���리�J�`�@: $" << a[j].getincome() << endl << endl;


        int Food, Transportation, Shopping, Entertainment, Housing, Medical;            //��X
        int monthlyoutTotal = 0;
        cout << "�п�J�Ӥ�T�\��X: ";
        cin >> Food;
        cout << "�п�J�Ӥ��q��X: ";
        cin >> Transportation;
        cout << "�M��J�Ӥ��ʪ���X: ";
        cin >> Shopping;
        cout << "�п�J�Ӥ�T�֤�X: ";
        cin >> Entertainment;
        cout << "�п�J�Ӥ�a�Τ�X: ";
        cin >> Housing;
        cout << "�п�J�Ӥ����Ĥ�X: ";
        cin >> Medical;
        monthlyoutTotal = Food + Transportation + Shopping + Entertainment + Housing + Medical;

        a[j].setoutpay(monthlyoutTotal);

        cout << setprecision(2) << fixed;
        cout << "-------------------------------------------\n";
        cout << "�A�����X�`�@: $" << a[j].getoutpay() << endl << endl;


        cout << "-------------------------------------------\n";
        cout << "�z�ثe���l�B�Ѿl: $" << a[j].getbalance() << endl;
    }
    for(int x=0;x!=99;)
    {
        int z = 0;
        cout << "�п�J�Q�ݪ����" << endl<<"��J99�����ӵ{���G";
        cin >> z;
        cout << "�A���리�J�`�@: $" << a[z].getincome() << endl << endl;
        cout << "�A�����X�`�@: $" << a[z].getoutpay() << endl << endl;
        cout << "�A����l�B�`�@: $" << a[z].getbalance() << endl << endl;
    }

    system("pause");
    return 0;
}