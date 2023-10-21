#include <stdio.h>

/**
 * main - print sum of all natural nums which are multiple of 3 or 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
