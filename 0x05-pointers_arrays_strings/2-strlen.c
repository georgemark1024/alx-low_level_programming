#include "main.h"

/**
 * _strlen - returns size of a string
 * @s: the string
 * Return: size
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
