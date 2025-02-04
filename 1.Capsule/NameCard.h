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
		std::cout << "이    름: " << name << "\n";
		std::cout << "전화번호: " << phoneNum << "\n";
		std::cout << "주    소: " << address << "\n";
		std::cout << "직    급: " << rank<< "\n";
	}

private:
	std::string name;
	std::string phoneNum;
	std::string address;
	std::string rank;
};