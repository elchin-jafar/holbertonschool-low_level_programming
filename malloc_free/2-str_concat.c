#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatinate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length_s1 = 0, length_s2 = 0, index_str, index_ptr = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (index_str = 0; s1[index_str]; index_str++)
		length_s1 += 1;

	for (index_str = 0; s2[index_str]; index_str++)
		length_s2 += 1;

	ptr = malloc((length_s1 + length_s2) * sizeof(char) + sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (index_str = 0; s1[index_str]; index_str++)
	{
		ptr[index_str] = s1[index_str];
		index_ptr += 1;
	}
	for (index_str = 0; s2[index_str]; index_str++)
	{
		ptr[index_ptr] = s2[index_str];
		index_ptr += 1;
	}

	return (ptr);
}
