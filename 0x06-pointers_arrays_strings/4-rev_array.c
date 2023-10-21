#include "main.h"
#include <unistd.h>

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int end = n - 1;
	int copy[13];

	for (; i < n; i++)
	{
		copy[i] = a[i];
	}
	i = 0;
	while (end >= 0)
	{
		a[i] = copy[end];
		i++;
		end--;
	}
}
