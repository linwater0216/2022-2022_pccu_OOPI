#ifndef Date_H
#define Date_H
class Date
{
private:
	int month;
	int day;
	int year;
public:

	void setMonth(int);
	int getMonth() const;
	void setDay(int);
	int getDay() const;
	void setYear(int);
	int getYear() const;

	void print()const;

};
#endif