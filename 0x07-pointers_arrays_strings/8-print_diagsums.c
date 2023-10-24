#include "main.h"

/**
 * print_diagsums - prints the sum of numbers on diagonals of an array
 * @a: interger array
 * @size: row and column size of the array (square)
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum;

	while (i < size)
	{
		int inner_count = 0;

		while (inner_count < size)
		{
			 
			 sum = sum + a[i * size + inner_count];
			inner_count++;
		}
	}
}
