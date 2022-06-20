#include "yearClass.h"

// Definiting getter and setter
unsigned long long Year::getYear() const { return m_year; }
void Year::setYear(unsigned long long year) { m_year = year; }

// Overloading << operator for cout
std::ostream& operator<<(std::ostream& out, const Year& year)
{
	out << year.getYear();
	return out;
}

// Overloading >> operator for cin
std::istream& operator>>(std::istream& in, Year& year)
{
	int i{};
	in >> i;
	year.setYear(i);
	return in;
}

// Returns true if year is leap, and false if it isn't
bool Year::isLeap()
{
	if (m_year % 4 == 0)
	{
		if (m_year % 100 == 0)
		{
			if (m_year % 400 == 0)
			{
				return true; // If divisible by 400
			}
			return false; // If divisibel by 100 and not divisible by 400
		}
		return true; // If is divisible by 4 and is not divisible by 100
	}
	return false; // If is not divisible by 4
}