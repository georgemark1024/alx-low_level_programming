#include"main.h"

/**
 * _abs - computes absolute value of an int
 * @n: Int to be computed
 * Return: 0 for success
 */

int _abs(int n)
{
	int x;

	if (n > 0)
		_putchar('n');
	else if (n == 0)
		_putchar('0');
	else
	{
		x = n * -1;
		_putchar('x');
	}
	return (0);
}
