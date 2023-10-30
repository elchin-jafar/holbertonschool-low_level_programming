#include "main.h"

/**
 * factorial - calcs factorial of n
 * @n: number to find factorial of
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
