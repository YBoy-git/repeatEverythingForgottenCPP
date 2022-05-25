#pragma once

#include <iostream>

using namespace std;

// Year-class is a class that contains a private field m_year, public getter and setter to it, and an isLeap() method
class Year
{
private: // private fields and methods
	unsigned long long m_year;

public: // public fields and methods
	// constructor
	Year(unsigned long long year = 0) : m_year{ year } {}

	// getter and setter
	unsigned long long getYear() const;
	void setYear(unsigned long long year);

	// friend functions for overloading <<, >> operators in yearClass.cpp
	friend ostream& operator<<(ostream& out, const Year& year);
	friend istream& operator>>(istream& in, Year& year);

	// declaring a method for checking whether the year is leap
	bool isLeap();
};