#include <iostream>
#include <vector>
#include "Currency.h"

std::vector<Currency> setupCurrencies()
{
	std::vector<Currency> result;
	Currency gbp, eur, usd, yen;
	gbp.name = "Great British Pound";
	gbp.symbol = "GBP";
	gbp.valueFromUSD = 0.89f;
	result.push_back(gbp);

	eur.name = "Euro";
	eur.symbol = "EUR";
	eur.valueFromUSD = 1.02f;
	result.push_back(eur);

	usd.name = "United States Dollar";
	usd.symbol = "USD";
	usd.valueFromUSD = 1.0f;
	result.push_back(usd);

	yen.name = "Japanese Yen";
	yen.symbol = "YEN";
	yen.valueFromUSD = 149.74f;
	result.push_back(yen);

	return result;

}

int main()
{
	std::vector<Currency> currencies = setupCurrencies();

	int inputCurrency;
	float inputValue;
	float convertedValue;
	
	std::cout << "Welcome to the currency converter!" << std::endl;
	for (size_t i = 0; i < currencies.size(); i++)
	{
		std::cout << i << " - " << currencies.at(i).symbol << " | ";
	} 
	std::cin >> inputCurrency;
	std::cout << std::endl << "Enter the amount in USD" << std::endl;
	std::cin >> inputValue;



	std::cin.get();
}
