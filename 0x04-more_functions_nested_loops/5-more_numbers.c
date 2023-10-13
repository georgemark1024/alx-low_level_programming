#include "main.h"

/**
 * more_numbers - prints numbers form 0 to 14 10 times
 * Return: ...
 */

void more_numbers(void)
{
	int i = 0;
	int y = 0;

	while (y <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
		y++;
	}
}
