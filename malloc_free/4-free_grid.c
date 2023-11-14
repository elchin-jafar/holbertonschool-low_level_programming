#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freed grid
 * @grid: given 2d arr
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
