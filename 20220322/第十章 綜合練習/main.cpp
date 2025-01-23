/*
請設計三類別Birthday、Salary、Staff
按照題目所需為三個類別設計適當的 constructor

Birthday類別的data fields(private): year:int、month:int、day:int
Birthday類別的function有 setYear、getYear、setMonth、getMonth、setDay、getDay、print
Birthday的print函式的功能為輸出 year/month/day

Salary類別的data fields(private): hours:int、workDay:int
Salary類別的function有 setHours、getHours、setWorkDay、getWorkDay、getMonthlySalary、print
getMonthlySalary的計算方式: 168 * hours * workDay
Salary的print函式的功能為輸出 getMonthlySalary

Staff類別的data fields(private): name:string、birthday:Birthday、salary:Salary 、numOfStaff:static int
Staff類別的function有setName、getName、setBirthday、getBirthday、setSalary、getSalary、getNumOfStaff、print
Staff的print函式的功能為輸出 name/Birthday的print/Salary的print

Staff建構子務必使用物件組合完成，例如：
Staff("Kirito", Birthday(1999, 6, 1), Salary(8, 10))
不限制組合格式


輸入說明：
主程式建立三個Staff物件，資訊如下：

Staff1：name-Kirito、birthday-2002年3月2日、hours -10、workDay-20

Staff2：name-Asuna、birthday-2003年5月4日、hours -8、workDay-30

Staff3：name-Alice、birthday-2000年10月8日、hours -3、workDay-4

輸入1個name (string)、1個year(int)、1個day(int)、1個hours (int)

輸出說明：
第1個輸入值修改Staff1的name，第2個輸入值修改Staff2的birthday年份，第3個輸入值修改Staff3的birthday日期，第4個輸入值修改Staff1與Staff3的hours ，請在主程式利用Staff物件中print函式按照範例輸出格式輸出，最後輸出Staff的numOfStaff即可。

範例輸入：
Eden 1995 10 4

範例輸出：
Eden 2002/3/2 13440
Asuna 1995/5/4 40320
Alice 2000/10/10 2688
Staff: 3
*/