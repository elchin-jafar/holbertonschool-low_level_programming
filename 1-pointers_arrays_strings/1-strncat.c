#include "main.h"

/**
 * _strncat - concat n chars of src to dest
 * @dest: final destination
 * @src: source string to concat
 * @n: n chars of src should concat
 * Return: pointer to final destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0, i;

	while (dest[length_dest])
		length_dest++;
	for (i = 0; src[i] && i < n; i++)
		dest[length_dest++] = src[i];

	return (dest);
}
