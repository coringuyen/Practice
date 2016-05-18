#include "SumSquareDiff.h"

int SumSquare::sumOfSquare(int num)
{
	int total = 0;
	for (int i = 0; i < num + 1; ++i)
	{
		total += (i * i);
	}

	return total;
}

int SumSquare::squareOfSum(int num)
{
	int total = 0;
	for (int i = 0; i < num + 1; ++i)
	{
		total += i;
	}

	return total * total;
}

int SumSquare::sumSquareDifference(int first, int second)
{
	return first - second;
}