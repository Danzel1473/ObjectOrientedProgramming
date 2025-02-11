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
			std::cout << "���� ������ ������ Ƣ�� �ֽ��ϴ�..\n";
	
	}
	                                              
	virtual void TrainHoseOnFire() override
	{
		hoseTainedOnFire = true;
		Firefighter::TrainHoseOnFire();
	}

private:
	bool hoseTainedOnFire = false;
};