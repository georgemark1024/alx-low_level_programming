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
	unsigned long int i = 0;

	str_cpy = (char *)malloc(_strlen(str));
	if (str_cpy == NULL || _strlen(str_cpy) < _strlen(str))
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str_cpy[i] = str[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

