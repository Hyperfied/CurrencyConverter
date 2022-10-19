#include "Currency.h"

float Currency::convert(float usdValue)
{
	return usdValue * this->valueFromUSD;
}