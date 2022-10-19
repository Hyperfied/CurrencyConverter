#pragma once
#include <string>

class Currency
{
public:
	std::string name;
	float valueFromUSD;
	char symbol;

	float convert(float usdValue);
};