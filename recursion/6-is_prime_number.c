#include "main.h"

/**
 * prime_helper - find if given num prime or not
 * @n: given num
 * @divisor: divisors of num in range (num / 2 - 2)
 * Return: 1 if n is prime, 0 if not
 */

int prime_helper(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - finds if given num prime or not
 * @n: given num
 * Return: 1 if num prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor;

	divisor = n / 2;
	if (n <= 1)
		return (0);

	return (prime_helper(n, divisor));
}
