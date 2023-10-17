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
		if (*s == '\0')
		{
			while (*s <= '\0')
			{
				_putchar(*s);
				s--;
			}
		}
	}
}
