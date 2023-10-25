#include "main.h"

/**
 * puts_half - prints second half of given string
 * @str: given string
 */

void puts_half(char *str)
{
	int length = 0, i, start;

	while (*(str + length))
		length++;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
