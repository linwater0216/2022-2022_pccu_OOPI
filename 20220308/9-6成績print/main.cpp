/*請以分開檔案方式設計Score封裝物件
data fields(private)：string name, int math
function:setName, setMath, getName, getMath
以及再加上一個 function
名為 print，輸出 名字、數學成績

輸入說明：主程式建立兩個Score物件score1(John, 90)和score2(Mary, 80)，然後輸入1個名字(string)和1個數學成績(int)，分別將第1個的輸入值修改score1的名字，第2個的輸入值為修改score2的數學成績。

輸出說明：於主程式利用 score1.print() 和 score2.print() 進行輸出。

範例輸入：
Jerry 85

範例輸出：
Jerry 90
Mary 85

※ .h 檔內請務必避免多重載入(if no define)
*/
#include <iomanip>
#include <string>
#include "Score.h"
using namespace std;
int main()
{
	int b;
	string a;
	Score Score1;
	Score Score2;
	Score1.setName("John");
	Score1.setMath(90);
	Score2.setName("Mary");
	Score2.setMath(80);
	cin >> a >> b;
	Score1.setName(a);
	Score2.setMath(b);
	Score1.print();
	Score2.print();
}