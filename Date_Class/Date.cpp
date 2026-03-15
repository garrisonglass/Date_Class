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

