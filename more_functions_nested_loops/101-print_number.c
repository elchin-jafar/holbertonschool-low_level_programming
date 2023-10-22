#include "main.h"

/**
 * digit_finder - finds digits of given number
 * @num: number to find its digit
 * Return: digit
 */

int digit_finder(int num)
{
	int i, digit = 1;
	
	if (num < 0)
		num = -num;
	for (i = 10; i < num; i *= 10)
	{
		if (num / 10 != 0)
			digit += 1;
	}
	return (digit);
}

/**
 * power10 - returns 10^n
 * @n: exp
 * Return: result of power operation
 */

int power10(int n)
{
	int res = 1, i;

	for (i = 0; i < n; i++)
		res *= 10;
	return (res);
}

/**
 * print_number - prints given number
 * @n: given number for print
 * Return: void
 */

void print_number(int n)
{
	int digit, i, res;

	digit = digit_finder(n);

	for (i = 1; i <= digit; i++)
	{
		if (n < 0)
		{
			_putchar(45);
			n = -n;
		}
		res = n / power10(digit - i);
		_putchar(res % 10 + '0');
	}
}
