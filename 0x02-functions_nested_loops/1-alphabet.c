#include"main.h"

/**
 * lower_alphabet - writes the alphabet in lowercase
 * Documentation:
 * Return: 0 for success
 */
int print_alphabet(void)
{
	char y = 'a';
	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
	return (0);
}

