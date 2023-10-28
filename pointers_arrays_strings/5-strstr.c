#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring
 * Return: pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, count = 0, length_needle = 0;

	while (needle[length_needle])
	{
		length_needle++;
	}

	if (*needle == 0)
		return (haystack);

	while (needle[i])
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				i++;
				count++;
				continue;
			}
			else if (needle[i + 1] == '\0')
				break;
		}
		if (count == length_needle)
		{
			return (haystack + i + 2);
		}
		i++;
	}
	return ('\0');
}
