#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a two dimensional grid
 *@grid: pointer to the grid
 *@height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
