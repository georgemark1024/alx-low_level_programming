#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: String
 * Return: void
 */

void puts_half(char *str)
{
	int size = 0, n;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 != 0)
	{
		n = (size - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = size / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
}
