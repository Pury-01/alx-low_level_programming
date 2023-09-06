#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - allocates 2 dimensional array of integers
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to 2 dimensional array of integers, else NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}
	return (grid);

}
