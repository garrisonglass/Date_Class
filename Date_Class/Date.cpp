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

