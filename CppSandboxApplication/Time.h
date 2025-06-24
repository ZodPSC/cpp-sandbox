#pragma once
class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(int h, int m, int s);

	int GetHours() const;
	int GetMinutes() const;
	int GetSeconds() const;
	//int hours = 0;
	//int minutes = 0;
	//int second = 0;
};

