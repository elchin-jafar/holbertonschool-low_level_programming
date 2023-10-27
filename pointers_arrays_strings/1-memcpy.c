#include "main.h"

/**
 * _memcpy - copies memory area from src
 * @dest: pointer to final destination memo adr
 * @src: pointer to source
 * @n: n number of bytes should copy
 * Return: pointer to final destination memo adr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
