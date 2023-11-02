#include"main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int row, col;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		arr[row] = (int *)malloc(width * sizeof(int));
		if (arr[row] == NULL)
		{
			for (col = 0; col < row; col++)
			{
				free(arr[col]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			arr[row][col] = 0;
		}
	}
	return (arr);
}

