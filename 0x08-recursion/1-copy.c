#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int size = size(s);

	if (size == 0)
		return;
	_putchar(s[size]);
	size--;
	_print_rev_recursion(s[size]);
}

int size(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
		i++;
	size(s + 1);
}
