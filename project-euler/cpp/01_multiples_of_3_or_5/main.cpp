// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23.

// Find the sum of all multiples of 3 or 5 below 1000.

#include <iostream>

int sum_multiples_of_three_or_five(int limit);

int main()
{
	std::cout << sum_multiples_of_three_or_five(1000) << std::endl;
	return 0;
}

int sum_multiples_of_three_or_five(int limit)
{
	int sum = 0;

	for (size_t i = 0; i < limit; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	return sum;
}
