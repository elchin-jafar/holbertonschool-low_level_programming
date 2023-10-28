#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring
 * Return: pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[j] == needle[j])
				return (&needle[i]);
		}
	}
	return ('\0');
}
