#pragma once

#include <iostream>
#include <string>
#include "INamedPerson.h"

class Administrator : public INamedPerson
{
public:
	Administrator(const std::string& title, const std::string& firstName, const std::string& lastName)
		: title(title), firstName(firstName), lastName(lastName)
	{
	}

	std::string GetTitle() { return title; }
	std::string GetFirstName() { return firstName; }
	std::string GetLastName() { return lastName; }

	virtual std::string GetName() const override 
	{ 
		return title + " " + lastName + " " + firstName; 
	}


private:
	std::string title;
	std::string firstName;
	std::string lastName;

};