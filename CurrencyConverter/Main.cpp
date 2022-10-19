#include <iostream>
#include "Currency.h"

int main()
{
	Currency gbp;
	gbp.name = "Great British Pound";
	gbp.symbol = '£';
	gbp.valueFromUSD = 0.89f;

	std::cout << gbp.convert(5);
	std::cin.get();
}