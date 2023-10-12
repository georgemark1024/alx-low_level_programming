#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: input char
 * Return: 1 for alphabetic char and 0 otherwise
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
