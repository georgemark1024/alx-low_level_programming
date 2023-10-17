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
	char* y;
	char* *y;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		y[x++] = (s[i]);
	}
	s = *y
	_putchar('\n');
}
