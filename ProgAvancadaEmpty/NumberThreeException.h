#pragma once
#include "Exception.h"

class NumberThreeException : public Exception
{
public:
	NumberThreeException(std::string message) : Exception(message) {}
};