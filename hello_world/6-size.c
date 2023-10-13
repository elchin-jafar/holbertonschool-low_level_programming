#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(b));
	printf("Size of a long long int: %lld byte(s)\n", (long long int)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(c));
	return (0);
}
