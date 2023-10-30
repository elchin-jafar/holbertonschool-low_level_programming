#include "main.h"

/**
 * sqrt_finder - finder square of n
 * @n: given num
 * @root: square root of n
 * Return: root
 */

int sqrt_finder(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root == n / 2)
		return (-1);
	
	return (sqrt_finder(n, root + 1));
}

/**
 * _sqrt_recursion - returns natural square root of num
 * @n: given num
 * Return: square root of num
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_finder(n, root));
}
