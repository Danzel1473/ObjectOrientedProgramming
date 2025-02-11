#pragma once

#include <iostream>
#include <string>
#include "FireTruck.h"

class Firefighter
{
public:
	Firefighter(const std::string& name)
		: name(name)
	{
	}

	Firefighter(Firefighter& other) = delete;

	virtual ~Firefighter()
	{
	}

	// �Ҳ���(ExtinguishFire)
	virtual void ExtinguishFire()
	{
		std::cout << name << " �ҹ���� ���� ���� ����\n";
	}

	// ����(Drive)
	void Drive(FireTruck* truckToDrive, const class Point& position)
	{
		// ������ Ȯ��
		if (truckToDrive->GetDriver() != this) return;

		// �̵�
		truckToDrive->Drive(position);
	}

	const std::string GetName() const { return name; }
	void SetName(const std::string& name)
	{
		this->name = name;
	}

private:
	std::string name;
};