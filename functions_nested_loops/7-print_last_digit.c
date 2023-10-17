#include "main.h"

/**
 * print_last_digit - finds last digit
 *
 * @c: first member
 * Return: return last digit
 */

int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
