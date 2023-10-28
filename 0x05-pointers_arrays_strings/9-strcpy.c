#include "main.h"

/**
 * *_strcpy - copies *src to *dest
 * @dest: destination
 * @src: source
 * Return: destination address
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
