#include <iostream>
#include "Currency.h"

int main()
{
	Currency gbp, eur, usd, yen;
	gbp.name = "Great British Pound";
	gbp.symbol = "GBP";
	gbp.valueFromUSD = 0.89f;

	eur.name = "Euro";
	eur.symbol = "EUR";
	eur.valueFromUSD = 1.02f;

	usd.name = "United States Dollar";
	usd.symbol = "USD";
	usd.valueFromUSD = 1.0f;

	yen.name = "Japanese Yen";
	yen.symbol = "YEN";
	yen.valueFromUSD = 149.74f;

	std::cout << gbp.convert(5) << gbp.symbol;
	std::cin.get();
}