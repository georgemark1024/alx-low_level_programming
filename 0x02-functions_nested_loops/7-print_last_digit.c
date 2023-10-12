#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number
 * Return: Last digit of c
 *
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
