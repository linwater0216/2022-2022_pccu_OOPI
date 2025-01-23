/*承上題
請設計一長方形Rectangle封裝物件
將長方形的data fields改成private
data fields(private) : double width, double height
並完成 getArea()、getPerimeter() 兩個原有函式
再增加2個set function：
void setWidth(double)
void setHeight(double)

記得引入.h標頭檔，並在.h檔中避免多重載入

輸入說明：主程式中輸入2組長方形的長寬作為建構2個長方形物件的參數，再將第二個長方形的長改為5.0、寬改為2.5。

輸出說明：第一行與第二行輸出原本2個長方形的面積和周長，第三行輸出第二個長方形修改後的面積和周長。

範例輸入：
6.9 7.2 9.1 5.6

範例輸出：
49.68 28.20
50.96 29.40
12.50 15.00

※ 面積與周長皆取至小數點後第二位*/
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle Rectangle1;
    Rectangle Rectangle2;
    double a1, a2;
    cin >> a1 >> a2;
    Rectangle1.setWidth(a1);
    Rectangle1.setHeight(a2);
    cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle1.getPerimeter() << endl;
    cin >> a1 >> a2;
    Rectangle2.setWidth(a1);
    Rectangle2.setHeight(a2);


    cout << fixed << setprecision(2) << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    Rectangle2.setWidth(5.0);
    Rectangle2.setHeight(2.5);
    cout << Rectangle2.getArea() << " " << Rectangle2.getPerimeter() << endl;
    return 0;
}