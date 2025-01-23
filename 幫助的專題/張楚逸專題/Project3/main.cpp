#include<iostream>
#include<iomanip>
#include "situation.h"
using namespace std;


int main() {
    
    situation a[13];                                                                                    //時間紀錄
    for (int j = 1; j <= 12; j++) {
        int month;
        cout << "請輸入記帳的月份: ";
        cin >> month;


        int salary, otherincome;                                                                    //收入
        int monthlyinTotal = 0;
        cout << "請輸入該月薪資收入: ";
        cin >> salary;
        cout << "請輸入該月被動收入: ";
        cin >> otherincome;
        monthlyinTotal = salary + otherincome;

        a[j].setincome(monthlyinTotal);

        cout << fixed << setprecision(2);
        cout << "-------------------------------------------\n";
        cout << "你的月收入總共: $" << a[j].getincome() << endl << endl;


        int Food, Transportation, Shopping, Entertainment, Housing, Medical;            //支出
        int monthlyoutTotal = 0;
        cout << "請輸入該月三餐支出: ";
        cin >> Food;
        cout << "請輸入該月交通支出: ";
        cin >> Transportation;
        cout << "清輸入該月購物支出: ";
        cin >> Shopping;
        cout << "請輸入該月娛樂支出: ";
        cin >> Entertainment;
        cout << "請輸入該月家用支出: ";
        cin >> Housing;
        cout << "請輸入該月醫藥支出: ";
        cin >> Medical;
        monthlyoutTotal = Food + Transportation + Shopping + Entertainment + Housing + Medical;

        a[j].setoutpay(monthlyoutTotal);

        cout << setprecision(2) << fixed;
        cout << "-------------------------------------------\n";
        cout << "你的月支出總共: $" << a[j].getoutpay() << endl << endl;


        cout << "-------------------------------------------\n";
        cout << "您目前的餘額剩餘: $" << a[j].getbalance() << endl;
    }
    for(int x=0;x!=99;)
    {
        int z = 0;
        cout << "請輸入想看的月份" << endl<<"輸入99結束該程式：";
        cin >> z;
        cout << "你的月收入總共: $" << a[z].getincome() << endl << endl;
        cout << "你的月支出總共: $" << a[z].getoutpay() << endl << endl;
        cout << "你的月餘額總共: $" << a[z].getbalance() << endl << endl;
    }

    system("pause");
    return 0;
}