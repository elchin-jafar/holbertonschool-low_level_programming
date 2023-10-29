#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: given string
 * Return: converted string to leet
 */

char *leet(char *str)
{
	char leet[5] = {'A', 'E', 'O', 'T', 'L'};
	char leeted[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet[j] || str[i] == leet[j] + 32)
				str[i] = leeted[j];
		}
	}
	return (str);
}
