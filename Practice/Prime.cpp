#include "Prime.h"
#include <iostream>

bool Prime::IsPrimeNum(unsigned num)
{
	/*unsigned long long max;
	if (num > 100) { max = num / 10; }
	else max = 10;*/

	if (num == 1 || num == 0) return false;

	if (num >= 9)
	{
		for (int i = 3; i < num; ++i)
		{
			if (num % i == 0) { return false; }
		}
	}
	if (num % 2 != 0 || num == 2) return true;
}

int Prime::higestPrime(int min, int max)
{
	int highest = 0; // keep track of the highest Prime number
	for (int i = min; i <= max; ++i)
		if (IsPrimeNum(i)) // checking if its a prime number
			if (i > highest) { highest = i; } // if this prime number is higher than the last highest then replace it
	return highest;
}

unsigned long Prime::sumOfPrime(int min, int max)
{
	unsigned long sumTotal = 0;
	for (int i = min; i < max; ++i)
	{
		if (IsPrimeNum(i))
		{
			//std::cout << i << std::endl;
			sumTotal += i;
		}
	}
	return sumTotal;
}

void Prime::findPrime(int num)
{
	for (int i = 0; i < num; ++i)
	{
		if (IsPrimeNum(i)) { std::cout << i << std::endl; }
	}
}

int Prime::prime10001st()
{
	int prime10001 = 0;
	int theprime = 1;

	do
	{
		theprime++;
		if (IsPrimeNum(theprime))
		{
			prime10001++;
		}
	} while (prime10001 != 10001);

	return theprime;
}