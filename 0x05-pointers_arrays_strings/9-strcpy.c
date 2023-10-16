#include "main.h"

/**
 * *_strcpy - copies *src to *dest
 * @dest: destination
 * @src: source
 * Return: destination address
 */

char *_strcpy(char *dest, char *src)
{
	*dest = *src;
	return (&dest);
}
