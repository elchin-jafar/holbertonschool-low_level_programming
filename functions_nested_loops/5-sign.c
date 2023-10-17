#include "main.h"

/**
 * print_sign - Prints + or - if positive or negative num
 * @n: positive or negative or zero
 * Return: 1, -1 or zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
