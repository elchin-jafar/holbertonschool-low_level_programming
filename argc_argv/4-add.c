#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcs sum of positive arguments
 * @argc: length of arguments
 * @argv: array of arguments
 * Return: 1 if char recevie as argument, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > '9' || *argv[i] < '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
