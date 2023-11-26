#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes given function for each element of array
 * @array: every element of array should pass to action func
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
