#include <stdio.h>

/**
 * main - prints fibonacci nums below 50, starting from 1 and from 2
 * Return: 0
 */

int main(void)
{
	int first = 0, second = 1, prev_first;

	while (first + second < 50)
	{
		printf("%d, ", first + second);
		prev_first = first;
		first = second;
		second = prev_first + second;
	}
	printf("\n");

	first = 1, second = 1;

	while (first + second < 50)
	{
		printf("%d, ", first + second);
		prev_first = first;
		first = second;
		second = prev_first + second;
	}
	printf("\n");

	return (0);
}
