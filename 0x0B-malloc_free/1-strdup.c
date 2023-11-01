#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - returns a pointer to new memory
 * @str: pointer to a string
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int i;

	str_cpy = (char *)malloc(sizeof(*str));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(*str); i++)
	{
		str_cpy[i] = str[i];
	}
	return (str_cpy);
}
