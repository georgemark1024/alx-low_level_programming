#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints a number on screen
 * @n: number to be printed
 * Return: void
 **/

void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if(n == 0)
	{
		_putchar('0');
		return;
	}

	while(n / div >= 10)
	{
		div *= 10;
	}

	while (div > 0)
	{
		int digit = n / div;

		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
}

