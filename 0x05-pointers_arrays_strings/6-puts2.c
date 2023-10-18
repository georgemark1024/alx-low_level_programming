#include "main.h"

/**
 * puts2 - Prints a char and skips the next one
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	while (*str < '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
