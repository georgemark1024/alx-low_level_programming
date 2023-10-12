#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Documentation:
 * Return: 0 for success
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
	}

	_putchar('\n');
}

