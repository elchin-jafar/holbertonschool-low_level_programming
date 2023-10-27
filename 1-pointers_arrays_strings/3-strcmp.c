#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: difference of chars as ascii value
 */

int _strcmp(char *s1, char *s2)
{
	int i, length_s1 = 0, length_s2 = 0, long_length, res;

	while (s1[length_s1])
		length_s1++;

	while (s2[length_s2])
		length_s2++;

	long_length = length_s1 > length_s2 ? length_s1 : length_s2;

	for (i = 0; i < long_length; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
			break;
	}
	return (res);
}
