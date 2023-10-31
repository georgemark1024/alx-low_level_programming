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
	int size = sizeof (s1) + sizeof (s2) + 1;
	int count = 0;
	char *concat;

	concat = (char *)malloc(size);
	if (s1 == NULL && s2 == NULL)
	{
		concat[0] = "";
		return;
	}
	while (count <= size)
	{
		concat[count] = s1[count];
		if (s1[count] == '\0')
		{
			concat[count] = s2[count - sizeof(s1)];
		}
		count++;
	}
	free(concat);

}
