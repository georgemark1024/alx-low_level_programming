#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the char to check
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
