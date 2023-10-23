#include "main.h"

/**
 * print_rev - prints reverse of given string
 * @s: given string by pointer
 */

void print_rev(char *s)
{
	int i = 0, d;

	while (s[i] != '\0')
		i++;

	for (d = i - 1; d >= 0; d--)
		_putchar(s[d]);
	_putchar('\n');
}
