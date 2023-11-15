#include <stdio.h>
#include <stdlib.h>

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
	unsigned int length = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		length++;

	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		ptr[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		ptr[length++] = s2[index];

	ptr[length] = '\0';

	return (ptr);
}
