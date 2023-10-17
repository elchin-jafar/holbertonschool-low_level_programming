#include "main.h"

/**
 * times_table - prints times table from 0x0 to 9x9
 *
 * Return: Always void
 */

void times_table(void)
{
	int a, b, res;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			res = a * b;

			if (res < 10)
				_putchar(' ');
			else
				_putchar(res / 10 + '0');

			_putchar(res % 10 + '0');
		}
		_putchar('\n');
	}
}
