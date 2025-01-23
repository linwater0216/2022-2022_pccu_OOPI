/*請以分開檔案方式設計Score封裝物件
data fields(private)：string name, int math
function:setName, setMath, getName, getMath

輸入說明：主程式建立兩個Score物件score1("John", 90)和score2("Mary", 80)，然後然後輸入2組參數，將score1的名字修改成第一組物件的名字以及將score2的成績修改成第二組物件的成績。

輸出說明：輸出修改後的兩物件名字與成績。

範例輸入：
Jerry 70
May 85

範例輸出：
Jerry 90
Mary 85

※ .h 檔內請務必避免多重載入(if no define)
*/
#include "Score.h"
using namespace std;
int main()
{
	int b, d;
	string a, c;
	Score Score1;
	Score Score2;
	Score1.setName("John");
	Score1.setMath(90);
	Score2.setName("Mary");
	Score2.setMath(80);
	cin >> a >> b >> c >> d;
	Score1.setName(a);
	Score2.setMath(d);

	Score1.getName();
	Score1.getMath();
	Score2.getName();
	Score2.getMath();
}