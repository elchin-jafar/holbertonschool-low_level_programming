#include "main.h"

/**
 * _strncpy - copies n chars of src to dest
 * @dest: final destination
 * @src: source string to copy
 * @n: n chars should copy
 * Return: pointer to final destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length_dest = 0, length_src = 0, i;

	while (dest[length_dest])
		length_dest++;
	while (src[length_src])
		length_src++;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	for (i = length_src; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
