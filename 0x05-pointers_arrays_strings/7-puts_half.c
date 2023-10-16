#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: String
 * Return: void
 */

void puts_half(char *str)
{
	int size, n;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	if (size % 2 != 0)
	{
		n = (size - 1) / 2;
		while (*str != '\0')
		{
			str++;
			if (*str >= (n + 1))
				_putchar(*str);
		}
	}
	else
	{
		n = size / 2;
		while (*str != '\0')
		{
			str++;
			if (*str >= n)
				_putchar(*str);
		}
	}
}
