#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	while (n >= 0)
	{
		_putchar(a[n]);
		n--;
	}
}
