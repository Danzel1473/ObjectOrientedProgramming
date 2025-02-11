#pragma once
#include "Firefighter.h"

class TraineeFirefighter : public Firefighter
{
public:
	TraineeFirefighter(std::string name, bool hoseTrainedOnFire = false)
		: Firefighter(name), hoseTainedOnFire(hoseTrainedOnFire)
	{
	}

protected:
	virtual void TurnOnHose() override
	{
		if (hoseTainedOnFire)
			Firefighter::TurnOnHose();
		else
			std::cout << "¹°ÀÌ ¾û¶×ÇÑ °÷À¸·Î Æ¢°í ÀÖ½À´Ï´Ù..\n";
	
	}
	                                              
	virtual void TrainHoseOnFire() override
	{
		hoseTainedOnFire = true;
		Firefighter::TrainHoseOnFire();
	}

private:
	bool hoseTainedOnFire = false;
};