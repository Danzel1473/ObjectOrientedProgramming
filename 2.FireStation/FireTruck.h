#pragma once
#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

class FireTruck
{
public:
	FireTruck()
	{
		ladder = new Ladder(10.0f);
	}

	~FireTruck()
	{
		delete ladder;
	}


	void Drive(const Point& position)
	{ 
		if (driver == nullptr) return;

		std::cout << position << "위치로 소방차 이동 중\n";
	}

	const Ladder* GetLadder() const { return ladder; }

	class Firefighter* GetDriver() const { return driver; }
	void SetDriver(class Firefighter* driver) { this->driver = driver; }

	const Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

private:
	class Firefighter* driver = nullptr;
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};