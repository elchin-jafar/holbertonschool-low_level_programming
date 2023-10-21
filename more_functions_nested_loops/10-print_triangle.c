#include "main.h"

/**
 * print_triangle - print right lyed triangle by given size
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b > a; b--)
				_putchar(32);

			for (c = 0; c < a + 1; c++)
				_putchar(35);

			_putchar('\n');
		}
	}
}
