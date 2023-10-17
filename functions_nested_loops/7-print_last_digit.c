#include "main.h"

/**
 * print_last_digit - finds last digit
 *
 * @c: first member
 * Return: return last digit
 */

int print_last_digit(int c)
{
	if (c > 0)
	{
		_putchar(c % 10 + '0');
		return (c % 10);
	}
	_putchar((c * -1) % 10 + '0');
	return ((c * -1) % 10);
}
