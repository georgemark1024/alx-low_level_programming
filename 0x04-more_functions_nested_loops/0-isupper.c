#include "main.h"

/**
 * _isupper - finds whether a char is uppercase or not
 * @c: char input
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
