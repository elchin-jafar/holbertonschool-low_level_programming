#include "main.h"

/**
 * _strlen - finds length of given string
 * @s: the pointer to given string
 * Return: length of given string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
