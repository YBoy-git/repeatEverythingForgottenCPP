#include "yearClass.h"

// definiting getter and setter
unsigned long long Year::getYear() const { return m_year; }
void Year::setYear(unsigned long long year) { m_year = year; }

// overloading << operator for cout
ostream& operator<<(ostream& out, const Year& year)
{
	out << year.getYear();
	return out;
}

// overloading >> operator for cin
istream& operator>>(istream& in, Year& year)
{
	int i;
	cin >> i;
	year.setYear(i);
	return in;
}

/*
	returns true, if the year is leap, and false is isn't

	the year is leap in cases:
	the year is divisible by 400;
	the year is divisible by 4 and is not divisible by 100/
*/
bool Year::isLeap()
{
	if (m_year % 4 == 0)
	{
		if (m_year % 100 == 0)
		{
			if (m_year % 400 == 0)
			{
				return true; // if divisible by 400
			}
			return false; // if divisibel by 100 and not divisible by 400
		}
		return true; // if is divisible by 4 and is not divisible by 100
	}
	return false; // if is not divisible by 4
}