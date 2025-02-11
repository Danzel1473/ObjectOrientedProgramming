#pragma once

#include <string>

class INamedPerson
{
public:
	virtual std::string GetName() const = 0;

};