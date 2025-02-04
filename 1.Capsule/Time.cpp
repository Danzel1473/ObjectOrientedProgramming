#include "Time.h"
#include <iostream>

void Time::ShowTime()
{
	std::cout << "[" << hours << "�� " << minutes << "�� " << seconds << "��]\n";
}

void Time::ShowTimeInSeconds()
{
	int timeToSeconds = (hours * 3600) + (minutes * 60) + seconds;
	std::cout << timeToSeconds << "��\n";
}
