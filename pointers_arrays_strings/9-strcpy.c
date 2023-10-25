#include "main.h"

/**
 * _strcpy - copies str from second argument to first
 * @dest: final destination
 * @src: string source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i + 1) = *(src + i + 1);
		i++;
	}
	return (dest);
}
