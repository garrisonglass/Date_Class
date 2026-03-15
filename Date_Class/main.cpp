// Date_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Date.h"
int main()
{
	cout << "Testing the Date class\n";
	cout << "Constructor Tests - Valid Dates\n";
	Date    d1(6, 8, 1986);
	cout << d1.toNumeric()  << endl;
	cout << d1.toLong()     << endl;
	cout << d1.toEuro()     << endl;

	Date    d2(2, 29, 2024);
	cout << d2.toNumeric()  << endl;




}
