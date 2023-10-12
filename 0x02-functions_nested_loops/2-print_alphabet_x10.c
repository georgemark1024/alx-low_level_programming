#include"main.h"

int _putchar(char c);

/**
 * 10times - prints the alphabet in lowercase 10 times
 * Documentation:
 * Return: 0 for success
 */
int times10(void)
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

	return (0);
}

