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
	int tot_size, i = 0, j = 0;

	tot_size = size(dest) + size(src) + 1;

	char concat[tot_size];
	
	while (dest[i] != '\0')
	{
		concat[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while(src[i] != '\0')
	{
		concat[j] = src[i];
		i++;
		j++;
	}
	concat[tot_size] = '\0';
	return (concat);
}
/**
 * tot_size - computes the size of a srings
 * @str_ptr: pointer to first char of a string str_ptr
 * Return: size
 */


int size(char *str_ptr)
{
	int size = 0;

	while (*str_ptr != '\0')
	{
		str_ptr++;
		size++;
	}
	return (size);
}
