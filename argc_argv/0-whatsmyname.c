#include <stdio.h>

/**
 * main - prints its own name
 * @argc: number of given arguments
 * @argv: array of given arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
