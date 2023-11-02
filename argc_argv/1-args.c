#include <stdio.h>

/**
 * main - prints number of given args
 * @argc: number of args passed to func
 * @argv: array of arguments that passed to main
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
