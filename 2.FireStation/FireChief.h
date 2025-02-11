#pragma once
#include "FirefighterBase.h"

class FireChief : public FirefighterBase
{
public:
	FireChief(const std::string& name, FirefighterBase* numberOne = nullptr)
		:FirefighterBase(name), numberOne(numberOne)
	{
	}

	void TellFirefighterToExtinguishFire(FirefighterBase* col)
	{
		col->ExtinguishFire();
	}

	virtual void ExtinguishFire() override
	{
		if(numberOne != nullptr)
			TellFirefighterToExtinguishFire(numberOne);
	}

	FirefighterBase* GetNumberOne() { return numberOne; }
	void SetNumberOne(FirefighterBase* numberOne) { this->numberOne = numberOne; }

private:
	FirefighterBase* numberOne = nullptr;
};