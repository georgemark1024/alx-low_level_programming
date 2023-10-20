#include "main.h"

/**
 * _strncat - concatenates two strings, using part of the 2nd string
 * @dest: first part of the str to be returned
 * @src: last part of the resultant string
 * @n: Number of bytes of src to be added to dest
 * Return: updated dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (s <= n)
	{
		if (src[s] == '\0')
			break;
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
