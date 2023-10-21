#include "main.h"

/**
 * print_times_table - prints input times table
 *
 * @n: size of times table
 */

void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		_putchar(48);
		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(32);
			if (a * b < 10)
			{
				_putchar(32);
				_putchar(32);
			}
			else if (a * b > 9 && a * b < 100)
			{
				_putchar(32);
				_putchar(a * b / 10 + '0');
			}
			else if (a * b > 99)
			{
				_putchar(a * b / 100 + '0');
				_putchar(a * b / 10 % 10 + '0');
			}
			_putchar(a * b % 10 + '0');
		}
		_putchar('\n');
	}
}
