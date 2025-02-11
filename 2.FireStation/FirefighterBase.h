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

	// �Ҳ���(ExtinguishFire)
	// ���� ���� �Լ�
	virtual void ExtinguishFire() = 0;

	// ����(Drive)
	void Drive(FireTruck* truckToDrive, const class Point& position)
	{
		// ������ Ȯ��
		if (truckToDrive->GetDriver() != this) return;

		// �̵�
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

	// ȣ�� �ѱ�
	virtual void TurnOnHose()
	{
		std::cout << "���� ������ �ֽ��ϴ�.\n";
	}

	// ȣ�� ����
	virtual void TrainHoseOnFire()
	{
		std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";
	}

protected:
	std::string name;

};