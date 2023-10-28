#include "main.h"

/**
 * _strchr - locates char in given string
 * @s: given string
 * @c: given char
 * Return: char or Null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
