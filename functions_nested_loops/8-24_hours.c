#include "main.h"

/**
 * jack_bauer - prints time of every minute in a day with hh:mm format
 * Return: Always void
 */

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
