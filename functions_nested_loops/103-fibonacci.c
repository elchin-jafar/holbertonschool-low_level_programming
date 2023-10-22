#include <stdio.h>

/**
 * main - calculates sum of even fibonacci numbers below 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int first = 0, second = 1, prev_first, sum = 0, res;

	while (second < 4000000)
	{
		res = first + second;

		if (res % 2 == 0)
			sum += res;

		prev_first = first;
		first = second;
		second = prev_first + second;
	}
	printf("%li\n", sum);

	return (0);
}
