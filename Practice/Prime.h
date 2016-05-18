#pragma once
#include <vector>

class Prime
{
private:
	std::vector<int> listFator;
public:

	bool IsPrimeNum(unsigned num);
	int higestPrime(int min, int max);
	unsigned long sumOfPrime(int min, int max);
	void findPrime(int num);
	int prime10001st();
};
