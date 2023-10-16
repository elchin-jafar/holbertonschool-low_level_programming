#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	char hex2;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex2 = 'a'; hex2 <= 'f'; hex2++)
		putchar(hex2);
	putchar('\n');
	return (0);
}
