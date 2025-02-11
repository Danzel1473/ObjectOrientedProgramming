#pragma once
#pragma once

#include <iostream>
#include <string>
#include "FireTruck.h"
#include "INamedPerson.h"

class FirefighterBase : public INamedPerson
{
public:
	FirefighterBase(const std::string& name)
		: name(name)
	{
	}

	// 불끄기(ExtinguishFire)
	// 순수 가상 함수
	virtual void ExtinguishFire() = 0;

	// 운전(Drive)
	void Drive(FireTruck* truckToDrive, const class Point& position)
	{
		// 운전자 확인
		if (truckToDrive->GetDriver() != this) return;

		// 이동
		truckToDrive->Drive(position);
	}

	virtual std::string GetName() const override
	{ 
		return name; 
	}

	void SetName(const std::string& name)
	{
		this->name = name;
	}

protected:

	// 호스 켜기
	virtual void TurnOnHose()
	{
		std::cout << "불이 꺼지고 있습니다.\n";
	}

	// 호스 조준
	virtual void TrainHoseOnFire()
	{
		std::cout << "호스를 불이 발생한 곳에 겨냥하고 있습니다.\n";
	}

protected:
	std::string name;

};