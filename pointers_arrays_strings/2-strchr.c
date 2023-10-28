#include "main.h"

/**
 * _strchr - locates char in given string
 * @s: given string
 * @c: given char
 * Return: char or Null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] || s[i] == '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
