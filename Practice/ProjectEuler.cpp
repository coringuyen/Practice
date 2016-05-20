#include "ProjectEuler.h"

int PE::powerDigitSum(int power)
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

	for (unsigned i = 0; i < powerOfTwo.length(); ++i)
	{
		int num = (int)powerOfTwo.at(i) - '0';
		powerdigitsum += num;
	}

	return powerdigitsum;
}

int PE::sumOfSquare(int num)
{
	int total = 0;
	for (int i = 0; i < num + 1; ++i)
	{
		total += (i * i);
	}

	return total;
}

int PE::squareOfSum(int num)
{
	int total = 0;
	for (int i = 0; i < num + 1; ++i)
	{
		total += i;
	}

	return total * total;
}

int PE::sumSquareDifference(int first, int second)
{
	return first - second;
}

int PE::smallestMultiple(int num)
{
	int smallest = 1;
	bool condition = true;
	while (condition)
	{
		for (int i = 1; i < num + 1; ++i)
		{
			if (smallest % i != 0)
				break;
			else
			{
				if (i == num)
				{
					condition = false;
					return smallest;
				}
			}
		}
		smallest++;
	}
	return smallest;
}

int PE::sumOfMultiple3n5(int num)
{
	int sumtotal = 0;
	for (int i = 0; i < num; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumtotal += i;
		}
	}
	return sumtotal;
}

int PE::numberLetterCounts(std::string numbers)
{
	int total = 0;
	std::string number;

	for (unsigned i = 0; i < numbers.length(); ++i)
	{
		if (numbers.at(i) == ' ')
		{
			total += number.length();
			number.clear();
		}
		else
		{
			number.push_back(numbers.at(i));
			if(i == numbers.length() - 1)
				total += number.length();
		}
	}

	return total;
}