#include"main.h"

/**
 * print_alphabet - writes the alphabet in lowercase
 * Documentation:
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
}

