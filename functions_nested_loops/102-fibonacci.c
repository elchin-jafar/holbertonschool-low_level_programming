#include <stdio.h>

/**
 * main - prints fibonacci nums below 50, starting from 1 and from 2
 * Return: 0
 */

int main(void)
{
	long int first = 0, second = 1, prev_first;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%li, ", first + second);
		else
			printf("%li\n", first + second);
		prev_first = first;
		first = second;
		second = prev_first + second;
	}
	printf("\n");

	return (0);
}
