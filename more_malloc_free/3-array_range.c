#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array from min to max
 * @min: first element
 * @max: last element
 * Return: pointer to arr
 */

int *array_range(int min, int max)
{
	int *arr, index, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (index = 0; index < length; index++)
	{
		arr[index] = min;
		if (min == max)
			break;
		min++;
	}
	return (arr);
}
