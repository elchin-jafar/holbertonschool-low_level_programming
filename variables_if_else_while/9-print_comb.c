#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int begin = '1';
	int end = '9';

	while (begin <= end)
	{
		putchar(begin);
		if (begin < end)
			putchar(',');
		putchar(' ');
		begin++;
	}
	putchar('\n');
	return (0);
}
