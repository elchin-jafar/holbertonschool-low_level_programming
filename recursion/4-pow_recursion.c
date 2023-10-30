#include "main.h"

/**
 * _pow_recursion - calcs power of x base y
 * @x: number to calc power of
 * @y: base of power
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
