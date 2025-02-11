#pragma once
#include <iostream>
#include <vector>
#include "INamedPerson.h"

class FireStation
{
public:
	void ClockIn(INamedPerson* staffMember)
	{
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffMember)
			{
				contains = true;
				break;
			}
		}

		// ��� ������ �� �迭�� �߰�
		if (!contains)
		{
			clockedInStaff.emplace_back(staffMember);
		}
	}

	// �⼮ Ȯ�� �Լ�
	void RollCall()
	{
		for (INamedPerson* staff : clockedInStaff)
		{
			std::cout << staff->GetName() << "\n";
		}
	}
private:
	// ���� ���� ����
	std::vector<INamedPerson*> clockedInStaff;
};