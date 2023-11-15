#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat 2 string
 * @s1: first string
 * @s2: second string
 * @n: number of elements of s2 should concat
 * Return: pointer to concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1, index, index_str = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);

	ptr = malloc((length1 + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < length1; index++)
		ptr[index_str++] = s1[index];

	for (index = 0; index < n; index++)
		ptr[index_str++] = s2[index];

	return (ptr);
}
