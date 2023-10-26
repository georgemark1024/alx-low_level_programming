#include "main.h"

/**
 * _puts_recursion - prints out a string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
	}
}
