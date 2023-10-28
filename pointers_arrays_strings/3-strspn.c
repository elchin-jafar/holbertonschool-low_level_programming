#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: given string
 * @accept: string to check
 * Return: bytes in initial segment of s consist only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (bytes);
		}

		i++;
	}
	return (bytes);
}
