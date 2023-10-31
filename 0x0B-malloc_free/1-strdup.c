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
	str = malloc(sizeof(*str));
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
	free(str);
}
