/*
以分開三個檔案設計 Rectangle 物件
於類別內設計適當的建構者
data fields(private) 為 width(double)、height(double)
function 有 setWidth、getWidth、setHeight、getHeight、getArea、swapByReference、swapByPointer
請參考課本範例 TestPointerArgument.cpp 並於 swapByReference 與 swapByPointer 以 this 方式設計

函數名稱與形式為
Rectangle::swapByReference(Rectangle &r2)
Rectangle::swapByPointer(Rectangle *r2)

輸入說明：
請依序輸入兩組 width 與 height。

輸出說明：
將輸入的 width 與 height 建立兩個物件，並將兩物件利用 pass-by-reference 以及 pass-by-pointer 以 this 方式進行交換，最後輸出。

範例輸入：
2.5 3.3 10.5 2.2

範例輸出(以面積輸出)：
SwapByReference:8.25 23.10 to 23.10 8.25
SwapByPointer:23.10 8.25 to 8.25 23.10


*/#include "Rectangle.h"
using namespace std;
int main()
{
	double a, b, c, d;
	Rectangle Rectangle1;
	Rectangle Rectangle2;
	Rectangle* r2 = &Rectangle2;
	cin >> a >> b >> c >> d;
	Rectangle1.setWidth(a);
	Rectangle1.setHeight(b);
	Rectangle2.setWidth(c);
	Rectangle2.setHeight(d);
	cout << fixed << setprecision(2) << "SwapByReference:" << Rectangle1.getArea() << " " << Rectangle2.getArea() << " to ";
	Rectangle1.swapByReference(*r2); 
	cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << Rectangle1.getArea() << " " << Rectangle2.getArea() << " to ";
	Rectangle1.swapByPointer(r2);
	cout << fixed << setprecision(2) << Rectangle1.getArea() << " " << Rectangle2.getArea() << endl;
	
}