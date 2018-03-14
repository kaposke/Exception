#pragma once
#include <string>

class Exception
{
protected:
	std::string message;
public:
	Exception(std::string message);

	std::string getMessage();
};