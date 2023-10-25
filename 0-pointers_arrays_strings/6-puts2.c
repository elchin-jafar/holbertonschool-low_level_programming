#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: given string
 */

void puts2(char *str)
{
	int length = 0, i;

	while (*(str + length))
		length++;

	for (i = 0; i < length; i = i + 2)
		_putchar(*(str + i));
	_putchar('\n');
}
