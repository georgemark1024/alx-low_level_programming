#include "main.h"

/**
 * _memset - copies a constant to specified number of memory locations
 * @s: string 
 * @b: constant character
 * @n: number of bytes of s where b will be copied
 * Return: modiified s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	while (count <= n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
