#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy and print given str
 * @str: given str
 * Return: copy of given str, or null if fail to allocate memo
 */

char *_strdup(char *str)
{
	int i = 0, index;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < i; index++)
		ptr[index] = str[index];

	return (ptr);
}
