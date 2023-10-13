#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: ...
 */
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
