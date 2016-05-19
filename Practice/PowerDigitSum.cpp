#include "PowerDigitSum.h"
#include <string>
#include <sstream>

int powerSum::powerDigitSum(int power)
{
	int poweroftwo = 2;
	int powerdigitsum = 0;
	std::string powerOfTwo;
	std::ostringstream convert;

	for (int i = 1; i < power; ++i)
	{
		poweroftwo *= 2;
	}

	convert << poweroftwo;
	powerOfTwo = convert.str();

	for (int i = 0; i < powerOfTwo.length(); ++i)
	{
		int num = (int)powerOfTwo.at(i) - '0';
		powerdigitsum += num;
	}

	return powerdigitsum;
}