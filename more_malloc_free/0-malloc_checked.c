#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory, if fail terminate with status 98
 * @b: size of block of memory should allocated
 * Return: pointer to allocated memo
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
