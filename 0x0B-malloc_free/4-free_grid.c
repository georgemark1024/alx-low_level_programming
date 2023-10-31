#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - frees the 2D array created before
 * @grid: pointer to the array
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, __attribute__((unused))int height)
{
	free(grid);
}
