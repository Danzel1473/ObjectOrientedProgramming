#pragma once
#include <string>
#include <iostream>

class NameCard
{
public:
	NameCard(std::string name, std::string phoneNum, std::string address, std::string rank)
		:name(name), phoneNum(phoneNum), address(address), rank(rank)
	{ }

	void ShowData()
	{
		std::cout << "��    ��: " << name << "\n";
		std::cout << "��ȭ��ȣ: " << phoneNum << "\n";
		std::cout << "��    ��: " << address << "\n";
		std::cout << "��    ��: " << rank<< "\n";
	}

private:
	std::string name;
	std::string phoneNum;
	std::string address;
	std::string rank;
};