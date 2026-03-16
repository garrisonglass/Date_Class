// Date_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Date.h"
int main()
{
	cout << "Testing the Date class\n";
	cout << "Constructor Tests - Valid Dates\n";
	Date    d1(6, 8, 1986); //My birthday
	cout << d1.toNumeric()  << endl;
	cout << d1.toLong()     << endl;
	cout << d1.toEuro()     << endl;

	Date    d2(2, 29, 2024);//Leap Year
	cout << d2.toNumeric()  << endl;

	cout << "\nConstructor Tests - Invalid Dates\n";
	Date    d3(2, 30, 2026);//Not a valid day
	cout << d3.toNumeric()  << endl;

	Date    d4(13, 10, 2021);//Not a valid month
	cout << d4.toNumeric()  << endl;

	Date    d5(0, 0, 0);     //Nothing is valid 
	cout << d5.toNumeric()  << endl;

	cout << "\nsetDate() Tests/'\n";
	Date    d6;
	d6.setDate(6, 31, 2026); //invalid
	cout << d6.toNumeric()  << endl;

	d6.setDate(4, 30, 2021); //valid
	cout << d6.toNumeric()  << endl;

	cout << boolalpha;

	cout << "\nLeap Year Tests\n";
	Date d7(1, 1, 2024);
	cout << d7.isLeapYear()     << endl;//object's year
	cout << d7.isLeapYear(1900) << endl;//false
	cout << d7.isLeapYear(2000) << endl;//true

	cout << "\nLast Day Tests\n";
	Date d8(2, 10, 2024);
	cout << d8.lastDay()        << endl;//29
	cout << d8.lastDay(2, 2025) << endl;//28
	cout << d8.lastDay(6, 2026) << endl;//30

	cout << "\nFormatting Tests\n";
	cout << d1.toNumeric()      << endl;
	cout << d1.toLong()         << endl;
	cout << d1.toEuro()         << endl;

	return 0;
}
