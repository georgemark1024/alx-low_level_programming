#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates and aray and initializes it with a char
 * @size: size of array
 * @c: char to be intitialized
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
