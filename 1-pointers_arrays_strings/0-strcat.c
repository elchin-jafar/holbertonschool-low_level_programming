#include "main.h"

/**
 * _strcat - concat 2 strings
 * @dest: final destination (string to copy to)
 * @src: string to copy
 * Return: concated string
 */

char *_strcat(char *dest, char *src)
{
	int length_dest = 0, length_src = 0, i;

	while (dest[length_dest])
		length_dest++;
	while (src[length_src])
		length_src++;

	for (i = 0; i < length_src; i++)
	{
		dest[length_dest] = src[i];
		length_dest++;
	}
	return (dest);
}
