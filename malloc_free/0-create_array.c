#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating array with giving size
 * @size: given size
 * @c: given char
 * Return: pointer to array or null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
