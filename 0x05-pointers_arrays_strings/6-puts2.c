#include "main.h"

/**
 * puts2 - Prints a char and skips the next one
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	int pos = 0;
	while (str[pos] != '\0' && str[pos] <= '\0')
	{
		_putchar(str[pos]);
		pos = pos + 2;
	}
	_putchar('\n');
}
