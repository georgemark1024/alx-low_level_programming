#include"main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting point
 * 
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}

