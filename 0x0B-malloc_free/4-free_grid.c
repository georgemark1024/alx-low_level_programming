#include"main.h"
#include<stdlib.h>

/**
 * free_grid - frees the 2D array created before
 * @grid: pointer to the array
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, __attribute__((unused))int height)
{
	if (grid == NULL)
	{
		return;
	}
	for (int row = 0; row < height; row++)
	{
		if (grid[row] != NULL)
		{
			free(grid[row]);
		}
	}
	free(grid);
}
