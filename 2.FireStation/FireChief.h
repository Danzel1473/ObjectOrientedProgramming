#pragma once
#include "Firefighter.h"

class FireChief : public Firefighter
{
public:
	FireChief(const std::string& name, Firefighter* numberOne = nullptr)
		:Firefighter(name), numberOne(numberOne)
	{
	}

	void TellFirefighterToExtinguishFire(Firefighter* col)
	{
		col->ExtinguishFire();
	}

	virtual void ExtinguishFire() override
	{
		if(numberOne != nullptr)
			TellFirefighterToExtinguishFire(numberOne);
	}

	Firefighter* GetNumberOne() { return numberOne; }
	void SetNumberOne(Firefighter* numberOne) { this->numberOne = numberOne; }

private:
	Firefighter* numberOne = nullptr;
};