#include "main.h"

/**
 * print_line - prints a line of size n on screen
 * @n: Number of dashes (_)
 * Return: ...
 */

void print_line(int n)
{
	int x;

	if (n == 0)
	{
		break;
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
