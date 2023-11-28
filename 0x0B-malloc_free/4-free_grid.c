#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
