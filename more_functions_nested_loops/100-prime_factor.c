#include <stdio.h>

/**
 * main - find highest prime factor of given num
 * Return: Always 0
 */

int main(void)
{
	long n = 612852475143, div;

	while (div <  / 2)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			continue;
		}

		for (div = 3; div < n / 2; div++)
		{
			if (n % div == 0)
				n /= div;
		}
	}


	printf("%ld\n", n);

	return (0);
}
