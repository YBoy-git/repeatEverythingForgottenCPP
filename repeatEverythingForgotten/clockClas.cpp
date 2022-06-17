#include "clockClass.h"

void Clock::to24h60m()
{
	int days{ m_totalMinutes / s_minutesInDay };
	if (m_totalMinutes >= s_minutesInDay)
	{
		m_totalMinutes -= days * s_minutesInDay;
	}
	else if (m_totalMinutes < 0)
	{
		m_totalMinutes -= --days * s_minutesInDay;
	}
}

std::string Clock::formatToString(int i) const
{
	if (i >= 0 && i <= 9)
	{
		return "0" + std::to_string(i);
	}
	else
	{
		return std::to_string(i);
	}
}

Clock::Clock(int totalMinutes) : m_totalMinutes{ totalMinutes }
{
	to24h60m();
}

Clock::Clock(int hours, int minutes) : Clock{ 60 * hours + minutes } {}

int Clock::getHours() const
{
	return m_totalMinutes / 60;
}
void Clock::setHours(int hours)
{
	int minutes{ m_totalMinutes % 60 };
	setTime(hours, minutes);
}

int Clock::getMinutes() const
{
	return m_totalMinutes % 60;
}
void Clock::setMinutes(int minutes)
{
	int hours{ m_totalMinutes / 60 };
	setTime(hours, minutes);
}

std::string Clock::getTime() const
{
	int hours{ m_totalMinutes / 60 };
	int minutes{ m_totalMinutes % 60 };
	return formatToString(hours) + ":" + formatToString(minutes);
}
void Clock::setTime(int hours, int minutes)
{
	setTotalMinutes(60 * hours + minutes);
}

int Clock::getTotalMinutes() const
{
	return m_totalMinutes;
}
void Clock::setTotalMinutes(int totalMinutes)
{
	m_totalMinutes = totalMinutes;
	to24h60m();
}

std::ostream& operator<<(std::ostream& out, const Clock& clock)
{
	int hours{ clock.m_totalMinutes / 60 };
	int minutes{ clock.m_totalMinutes % 60 };

	out << clock.formatToString(hours) << ":"
		<< clock.formatToString(minutes);
	return out;
}

Clock operator+(const Clock& c, int minutes)
{
	return *(new Clock{ c.m_totalMinutes + minutes });
}

Clock operator+(const Clock& c1, const Clock& c2)
{
	return *(new Clock{ c1.m_totalMinutes + c2.m_totalMinutes });
}

Clock operator-(const Clock& c, int minutes)
{
	return *(new Clock(c.m_totalMinutes - minutes));
}

Clock operator-(const Clock& c1, const Clock& c2)
{
	return *(new Clock{ c1.m_totalMinutes - c2.m_totalMinutes });
}