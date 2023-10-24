#include "main.h"
#include<stddef.h>

/**
 * _strchr - locates a specific character in a string
 * @s: string
 * @c: character to be searched
 * Return: pointer to the char if c is present in s, else NULL
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return (NULL);
}
