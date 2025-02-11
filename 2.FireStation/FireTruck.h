#pragma once
#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// ���� ���� (Forward Declaration)
// ��� ��ȯ ������ �����ϱ� ���ؼ�
class FirefighterBase;
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

		std::cout << position << "��ġ�� �ҹ��� �̵� ��\n";
	}

	const Ladder* GetLadder() const { return ladder; }

	class FirefighterBase* GetDriver() const { return driver; }
	void SetDriver(class FirefighterBase* driver) { this->driver = driver; }

	const Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

private:
	FirefighterBase* driver = nullptr;
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};