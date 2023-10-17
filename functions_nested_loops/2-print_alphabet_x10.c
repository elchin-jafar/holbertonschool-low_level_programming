#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		print_alphabet();
	}
}
