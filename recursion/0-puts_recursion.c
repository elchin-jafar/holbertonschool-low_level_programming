#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: pointer to string which should be print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
