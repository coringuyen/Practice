#include <iostream>
#include <fstream>
#include <string>
#include "Prime.h"
#include "SumSquareDiff.h"
#include "PowerDigitSum.h"

void CapitalizeFirstLetter(std::string sentence)
{
	sentence.front() = toupper(sentence.front());
	for (int i = 1; i < sentence.length(); ++i)
	{
		sentence.at(i) = tolower(sentence.at(i));
		if (sentence.at(i - 1) == ' ')
		{
			sentence.at(i) = toupper(sentence.at(i));
		}
	}

	std::cout << sentence << std::endl;
}

void GPS(int o, int p, int q, int r)
{
	if (o == q && p == r) { std::cout << "Here" << std::endl; }

	if (o == q && r > p) { std::cout << "N" << std::endl; }
	if (o == q && r < p) { std::cout << "S" << std::endl; }

	if (q > o && r == p) { std::cout << "E" << std::endl; }
	if (q < o && r == p) { std::cout << "W" << std::endl; }

	if(q > o && r > p) { std::cout << "NE" << std::endl; }
	if (q < o && r < p) { std::cout << "SW" << std::endl; }
	
	if (q < o && r > p) { std::cout << "NW" << std::endl; }
	if (q > o && r < p) { std::cout << "SE" << std::endl; }
}
void test_GPS()
{
	GPS(8054, 8811, 8054, -9238); // south
	GPS(-498, -3248, -7140, -3248); // west
	GPS(-4373, -7549, -4373, 3961); // north
	GPS(9226, -2915, 9474, -2915); // east
	GPS(8449, -2485, 8449, -2485);
	GPS(3321, 3806, -6074, 606);
	GPS(7914, 6091, 7914, 6091);
	GPS(8702, -3675, 8702, -3675);
	GPS(-5476, 8105, -5476, 8105);
	GPS(2101, 8305, 6511, 8305);
	GPS(8009, -3214, -3165, -3214);
	GPS(-8123, -9787, -4841, -9787);
	GPS(-4492, -6913, -5554, 3388);
	GPS(9256, 9712, 7362, 9712);
	GPS(-5674, -9666, 2676, -9666);
	GPS(-5404, -4831, -5404, 4844);
	GPS(-1695, -8249, -3264, 4165);
	GPS(-6253, -3922, -7240, -3922);
	GPS(-7931, 9694, -7931, 1194);
	GPS(2110, 3246, 1325, 3246);
	GPS(2759, -3934, 2759, 586);
	GPS(-7562, -5391, 2265, 8568);
	GPS(5232, 6615, -9031, 6615);
	GPS(-252, -5458, -6243, -6425);
	GPS(1675, 1252, 1675, 1252);
	GPS(2064, 8073, 5183, -1670);
	GPS(8457, 3485, -2556, 3485);
	GPS(2365, 2207, 4888, 8728);
	GPS(4948, 4186, 4948, 9899);
	GPS(-8664, 3428, -8664, 3428);
	GPS(3053, 1379, 3053, -225);
	GPS(-4816, 3830, -4816, 3697);
	GPS(6473, -1385, 6473, -1385);
	GPS(-9788, -5385, -180, 6379);
	GPS(-9097, 6408, -9097, 6408);
	GPS(5015, -8726, 5015, -8726);
	GPS(5881, -8173, 5881, -517);
	GPS(-8137, 1513, 305, 2959);
	GPS(1896, -950, 7176, -950);
	GPS(-6450, 9254, -6450, 9254);

}

int sumOfMultiple3n5(int num)
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

int smallestMultiple(int num)
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
}

Prime prime;
SumSquare SSD;
powerSum PSD;

int main()
{
	/*for (int i = 0; i < 100; ++i)
	{
		cout << 100 - i << " ";
	}*/

	//CapitalizeFirstLetter("The quick BROWN FOx");
	//CapitalizeFirstLetter("the quick brown fox");
	//CapitalizeFirstLetter("THE QUICK BROWN FOX");

	//findPrime(200);
	if (prime.IsPrimeNum(19999)) { std::cout << "Prime Number" << std::endl; }
	else { std::cout << "Not Prime Number" << std::endl; }

	//cout << higestPrime(1, 10001) << endl;
	//std::cout << prime.sumOfPrime(1, 2000000) << std::endl;
	//cout << sumOfMultiple3n5(1000) << endl;
	//prime.findPrime(2000);
	//std::cout <<  smallestMultiple(20) << std::endl;
	//std::cout << SSD.sumSquareDifference(SSD.squareOfSum(100), SSD.sumOfSquare(100)) << std::endl;
	//std::cout << prime.prime10001st() << std::endl;
	std::cout << PSD.powerDigitSum(15) << std::endl;


	system("Pause");
	return 0;
}