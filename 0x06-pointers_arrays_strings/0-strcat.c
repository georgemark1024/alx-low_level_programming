#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination str
 * @src: source str
 * Return: pointer to des
 t
 */

char *_strcat(char *dest, char *src)
{
	int size;
	int counter = 0;
	int src_counter = 0;
	char concat[];

	size = tot_size(dest, src) + 1;
	while (counter < size)
	{
		concat[counter] == dest[counter];
		counter++;
		if (dest[counter] == '\0')
		{
			continue;
			counter++;
			while (counter < size)
			{
				concat[counter] == src[src_counter];
				counter++;
				src_counter++;
			}
		}
	}
	concat[size] = '\0';
	dest = concat;
	return (dest)
}
/**
 * tot_size - computes the total size of two srings
 * @dest: string 1
 * @src: string 2
 * Return: total size
 */


int tot_size(char *dest, char *src)
{
	int size, size1, size2;
	int count = 0;

	while (dest[count] != '\0')
	{
		size1++;
		count++;
	}
	while (src[count] != '\0')
	{
		size2++;
		count++;
	}
	size = size1 + size2;
	return (size);
}
