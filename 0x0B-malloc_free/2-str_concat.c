#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str-concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int size = _strlen(s1) + _strlen(s2) + 1;
	int count = 0;
	char *concat;

	concat = (char *)malloc(size);
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (count <= size)
	{
		int count2 = count - _strlen(s1);

		concat[count] = s1[count];
		if (s1[count] == '\0')
		{
			while (s2[count2] != '\0')
			{
				concat[count] = s2[count2];
				count2++;
			}
		}
		count++;
	}
	concat[count] = '\0';
	return (concat);
}
