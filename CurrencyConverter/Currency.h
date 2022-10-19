#pragma once
#include <string>

class Currency
{
public:
	std::string name;
	float valueFromUSD;
	std::string symbol;

	float convert(float usdValue);
};