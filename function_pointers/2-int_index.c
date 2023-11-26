#include "function_pointers.h"

/**
 * int_index - searches for integer in array
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer function to compare integers
 *
 * Return: if any elements of array matches or size < 0 -1;
 * otherwise index of the 1st element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
