#pragma once
#include "Exception.h"

class NumberTwoException : public Exception
{
public:
	NumberTwoException(std::string message) : Exception(message) {}
};