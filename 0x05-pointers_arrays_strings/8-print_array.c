#include "main.h"
#include<stdio.h>

/**
 * print_array - prints n elemnetns of an array
 * @a: pointer to array
 * @n: no of elements to print out
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x <= n)
	{
		printf("%d, ", a[x]);
		x++;
	}
	printf("\n");
}
