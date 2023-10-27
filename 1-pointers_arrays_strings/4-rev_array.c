#include "main.h"

/**
 * reverse_array - reverses given array
 * @a: pointner to given array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
