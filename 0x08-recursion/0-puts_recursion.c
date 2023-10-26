#include "main.h"

/**
 * _puts_recursion - prints out a string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		break;
	}
	_putchar(s);
	_puts_recursion(s[i + 1]);
	_putchar('\n');
}
