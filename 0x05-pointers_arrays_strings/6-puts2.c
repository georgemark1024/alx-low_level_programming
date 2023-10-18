#include "main.h"

/**
 * puts2 - Prints a char and skips the next one
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	int pos = 0;

	while (str[pos] != '\0')
	{
		if (pos % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[pos]);
			pos++;
		}
	}
	_putchar('\n');
}
