#include "Date.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

Date::Date(int m, int d, int y)
{
	if (isValidDate(m, d, y))
	{
		month = m;
		day = d;
		year = y;

	}
	else
	{
		month = 1;
		day = 1;
		year = 1900;
	}
}

void Date::setDate(int m, int d, int y)
{
	if (isValidDate(m, d, y))
	{
		month = m;
		day = d;
		year = y;
	}
	else
	{
		month = 1;
		day = 1;
		year = 1900;
	}
}

bool Date::isLeapYear() const
{
	return isLeapYear(year);
}

bool Date::isLeapYear(int year) const
{
	if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
		return true;
	else
		return false;
}

int Date::lastDay() const
{
	return lastDay(month, year);
}

int Date::lastDay(int m, int y) const
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;
	else if (m==2)
	{
		if (isLeapYear(y))
			return 29;
		else
			return 28;
	}
	else
		return 31;
}

bool Date::isValidDate(int m, int d, int y) const
{
	if (y < 1900 || y>2100)
		return  false;
	if (m < 1 || m > 12)
		return false;
	int maxDay = lastDay(m, y);
	if (d < 1 || d > maxDay)
	    return false;
}

string Date::toNumeric() const
{
	ostringstream print;
	print << month << "/" << day << "/" << year;
	return print.str();
}
string Date::toLong() const
{
	static const string month_by_Name[] =
	{ 
		"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" 
	};
	ostringstream out;
	out << month_by_Name[month - 1] << " " << day << ", " << year;
	return out.str();
}

string Date::toEuro() const
{
	static const string month_by_Name[] =
	{
		"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	};
	ostringstream print;
	print << day << "/" << month << "/" << year;
	return print.str();
}

