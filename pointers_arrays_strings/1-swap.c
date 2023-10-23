#include "main.h"

/**
 * swap_int - swaps values of var a,b
 * @a: first member
 * @b: second member
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
