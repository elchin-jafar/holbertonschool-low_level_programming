#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - custom calloc
 * @nmemb: number of elements in allocated memo
 * @size: size of 1 element in this memo
 * Return: pointer to memo
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *zero;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	zero = arr;
	for (index = 0; index < nmemb; index++)
		zero[index] = '\0';

	return (arr);
}
