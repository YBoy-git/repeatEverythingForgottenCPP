#ifndef CLOCK_CLASS_052622_H
#define CLOCK_CLASS_052622_H

#include <iostream>
#include <string>

class Clock
{
private:

	inline static constexpr int s_minutesInDay{ 60 * 24 };

	int m_totalMinutes;

	std::string formatToString(int i) const;

	void to24h60m();

public:

	Clock(int totalMinutes = 0);
	Clock(int hours, int minutes);

	int getHours() const;
	void setHours(int hours = 0);

	int getMinutes() const;
	void setMinutes(int minutes = 0);

	std::string getTime() const;
	void setTime(int hours = 0, int minutes = 0);

	int getTotalMinutes() const;
	void setTotalMinutes(int totalMinutes = 0);

	friend std::ostream& operator<<(std::ostream& out, const Clock& clock);
	friend Clock operator+(const Clock& c, int minutes);
	friend Clock operator+(const Clock& c1, const Clock& c2);
	friend Clock operator-(const Clock& c, int minutes);
	friend Clock operator-(const Clock& c1, const Clock& c2);
};

#endif // CLOCK_CLASS_052622_H