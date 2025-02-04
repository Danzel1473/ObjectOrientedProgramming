#include "Time.h"
#include <iostream>

void Time::ShowTime()
{
	std::cout << "[" << hours << "시 " << minutes << "분 " << seconds << "초]\n";
}

void Time::ShowTimeInSeconds()
{
	int timeToSeconds = (hours * 3600) + (minutes * 60) + seconds;
	std::cout << timeToSeconds << "초\n";
}
