#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

char y = 'a';
/**
 * lower_alphabet - writes the alphabet in lowercase
 * Documentation:
 * Return: 0 for success
 */
int lower_alphabet(void)
{
	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
	return (0);
}

