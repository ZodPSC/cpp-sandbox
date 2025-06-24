#include "Time.h"

Time::Time(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

int Time::GetHours() const
{
	return hours;
}

int Time::GetMinutes() const
{
	return minutes;
}

int Time::GetSeconds() const
{
	return seconds;
}
