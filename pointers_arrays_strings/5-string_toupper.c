#include "main.h"

/**
 * string_toupper - make lowercase chars of given string uppercase
 * @a: given string
 * Return: pointer to string after uppercase implemented
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i++])
	{
		if (a[i] == 32)
			continue;
		else if (a[i] > 96 && a[i] < 123)
			a[i] = a[i] - 32;
	}
	return (a);
}
