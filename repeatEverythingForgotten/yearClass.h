#ifndef YEAR_CLASS_052622_H
#define YEAR_CLASS_052622_H

#include <iostream>

// Year-class is a class that contains a private field m_year, public getter and
// setter to it, and an isLeap() method
class Year
{
private:

	unsigned long long m_year;

public:

	Year(unsigned long long year = 0) : m_year{ year } {}

	// Getter and setter
	unsigned long long getYear() const;
	void setYear(unsigned long long year);

	// Friend functions for overloading <<, >> operators in yearClass.cpp
	friend std::ostream& operator<<(std::ostream& out, const Year& year);
	friend std::istream& operator>>(std::istream& in, Year& year);

	// Declaring a method for checking whether the year is leap
	bool isLeap();
};

#endif // YEAR_CLASS_052622_H