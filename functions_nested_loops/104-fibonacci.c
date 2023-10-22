#include <stdio.h>

/**
 * main - prints first 89 fibo nums
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int first = 0, second = 1, prev_first;
	int i;

	for (i = 0; i < 90; i++)
	{
		if (i != 89)
			printf("%li, ", first + second);
		else
			printf("%li", first + second);

		prev_first = first;
		first = second;
		second = prev_first + second;
	}
	printf("\n");

	return (0);
}
