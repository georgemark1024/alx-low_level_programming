#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 & 4
 * Return: ...
 */

void print_most_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
