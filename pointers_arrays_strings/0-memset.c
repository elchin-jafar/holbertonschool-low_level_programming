#include "main.h"

/**
 * _memset - fill memory wuth a constant byte
 * @s: memory area
 * @b: constnant byte
 * @n: first n bytes of s should fill
 * Return: filfulled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
