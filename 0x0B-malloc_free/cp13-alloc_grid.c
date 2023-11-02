#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int row = 0, col = 0;
	int size = width * height;
	int **arr;

	if (width <= 0|| height <= 0)
	{
		return (NULL);
	}
	*arr = (int *)malloc(height * sizeof(int *));
	if (arr == NULL)
        {
                return (NULL);
        }
	while (row * col <= size)
	{
		col = 0;
		while (col < width)
		{
			arr[row][col] = 0;
			col++;
		}
		row++;
	}
	return (arr);
}
