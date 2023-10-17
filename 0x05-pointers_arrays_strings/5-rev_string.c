#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int x = 0;
	int i;
	char y[];

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		y[x++] = (s[i]);
		if (i == 0)
			return (y);
	}
	_putchar('\n');
}
