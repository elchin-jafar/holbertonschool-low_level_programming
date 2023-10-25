#include "main.h"

/**
 * puts_half - prints second half of given string
 * @str: given string
 */

void puts_half(char *str)
{
	int length = 0, i;

	while (*(str + length))
		length++;

	for (i = length / 2; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
