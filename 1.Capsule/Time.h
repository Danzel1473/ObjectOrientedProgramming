#pragma once

class Time
{
public:
	Time(int hours = 0, int minutes = 0, int seconds = 0)
		:hours(hours), minutes(minutes), seconds(seconds)
	{
	}

	void ShowTime();
	void ShowTimeInSeconds();

private:
	int hours;
	int minutes;
	int seconds;
};