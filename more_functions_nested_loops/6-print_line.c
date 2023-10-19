#include "main.h"

/**
 * print_line - prints _ this char n times
 * @n: defines how many times should program prints _
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}
