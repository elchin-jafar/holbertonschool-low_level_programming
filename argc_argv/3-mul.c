#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcs multiply of arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if only 1 num received, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
