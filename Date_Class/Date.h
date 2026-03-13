#pragma once
class Date
{
	private:
		int day;
		int month;
		int year;
public:
	//Constructor
	Date(int m = 1, int d = 1, int y = 1900);
	//Mutator
	void setDate(int m, int d, int y);

	//Accessor
	int getmonth() const { return month;}
	int getday()   const { return day;  }
	int getyear()  const { return year; }

	//Leap year
	bool isLeapYear() const;
	bool isLeapYear(int year) const;

	//Last day of month
	int lastDay() const;
	int lastDay(int month, int year) const;
};

