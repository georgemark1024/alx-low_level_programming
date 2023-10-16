#include "main.h"

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
		_putchar(a[x]);
		_putchar(',');
		_putchar(' ');
		x++;
	}
}
