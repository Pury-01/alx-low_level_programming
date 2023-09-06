#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid
 *@grid: pointer to a pointer to a 2 dimensional grid
 *@height: rows in the grid
 */

void free_grid(int **grid, int height)
{
	grid = (int **)malloc(height * sizeof(int *));
	 
	free(grid);
}

      


