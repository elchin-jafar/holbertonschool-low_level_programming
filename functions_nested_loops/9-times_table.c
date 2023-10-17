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
		for (b = 0; b <= 9; b++)
		{
			res = a * b;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
