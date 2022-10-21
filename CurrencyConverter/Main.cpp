#include <iostream>
#include <vector>
#include "Currency.h"

std::vector<Currency> setupCurrencies()
{
	std::vector<Currency> result;
	Currency gbp, eur, usd, jpy, aud, cad, cny;
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

	jpy.name = "Japanese Yen";
	jpy.symbol = "JPY";
	jpy.valueFromUSD = 149.74f;
	result.push_back(jpy);

	aud.name = "Australian Dollar";
	aud.symbol = "AUD";
	aud.valueFromUSD = 1.57f;
	result.push_back(aud);

	cad.name = "Canadian Dollar";
	cad.symbol = "AUD";
	cad.valueFromUSD = 1.36f;
	result.push_back(cad);

	cny.name = "Chinese Yuan Renminbi";
	cny.symbol = "CNU";
	cny.valueFromUSD = 7.24f;
	result.push_back(cny);

	return result;

}

int main()
{
	std::vector<Currency> currencies = setupCurrencies();
	size_t currenciesSize = currencies.size();

	int inputCurrency;
	float inputValue;
	float convertedValue;
	
	std::cout << "Welcome to the currency converter!" << std::endl;
	for (size_t i = 0; i < currenciesSize; i++)
	{
		std::cout << i << " - " << currencies.at(i).symbol << " | ";
	} 
	std::cin >> inputCurrency;

	if (inputCurrency < 0 || inputCurrency > currenciesSize) {
		// cringe!!!
	}
	std::cout << "Enter the amount in USD" << std::endl;
	std::cin >> inputValue;

	std::cout << currencies.at(inputCurrency).valueFromUSD * inputValue;

	std::cin.get();
}
