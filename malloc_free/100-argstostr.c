#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - prints arguments of main func
 * @ac: argc
 * @av: argv
 * Return: pointer to new strings
 */

char *argstostr(int ac, char **av)
{
	int i = 0, arg, byte, size = ac;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptr[i++] = av[arg][byte];

		ptr[i++] = '\n';
	}

	ptr[size] = '\0';

	return (ptr);
}
