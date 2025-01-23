#include "Employee.h"
int main() {
	int a, c;
	string b;
	Employee employee1;
	Employee employee2;
	Employee employee3;
	Employee employee4;
	employee1.setName("Linda");
	employee1.setPosition("Chairman");
	employee1.setIncome(30000);
	employee1.setDays(15);
	employee2.setName("Superstar");
	employee2.setPosition("Superstar");
	employee2.setIncome(35000);
	employee2.setDays(20);
	employee3.setName("Spotlight");
	employee3.setPosition("Director");
	employee3.setIncome(23000);
	employee3.setDays(22);
	employee4.setName("Candy");
	employee4.setPosition("Consultant");
	employee4.setIncome(42000);
	employee4.setDays(28);
	cin >> a >> b >> c;
	employee1.setIncome(a);
	employee2.setPosition(b);
	employee3.setDays(c);
	employee4.setDays(c);
	cout << fixed << setprecision(2) << employee1.getPosition() << "-" << employee1.getName() << " " << employee1.getWage() << endl;
	cout << fixed << setprecision(2) << employee2.getPosition() << "-" << employee2.getName() << " " << employee2.getWage() << endl;
	cout << fixed << setprecision(2) << employee3.getPosition() << "-" << employee3.getName() << " " << employee3.getWage() << endl;
	cout << fixed << setprecision(2) << employee4.getPosition() << "-" << employee4.getName() << " " << employee4.getWage() << endl;


}