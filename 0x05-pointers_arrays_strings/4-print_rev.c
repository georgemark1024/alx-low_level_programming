#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s <= '\0')
	{
		_putchar(*s);
		s--;
	}
}
