#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes from source to copy to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;
	char *p;

	p = &dest;
	while (count <= n)
	{
		dest[count] = src[count];
		count++;
	}
	return (p);
}
