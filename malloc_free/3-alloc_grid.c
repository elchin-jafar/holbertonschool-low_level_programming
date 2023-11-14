#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create 2d array
 * @width: width of 2d arr
 * @height: height of 2d arr
 * Return: pointer to 2d arr
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hg_index, wd_index;

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hg_index = 0; hg_index < height; hg_index++)
	{
		twoD[hg_index] = malloc(sizeof(int) * width);

		if (twoD[hg_index] == NULL)
		{
			free(twoD[hg_index]);
			return (NULL);
		}
	}

	for (hg_index = 0; hg_index < height; hg_index++)
	{
		for (wd_index = 0; wd_index < width; wd_index++)
		{
			twoD[hg_index][wd_index] = 0;
		}
	}

	return (twoD);
}
