#include "main.h"
#include<stddef.h>

/**
 * _strpbrk - locates first occurence of any chars in accept in s
 * @s: string
 * @accept: string for reference
 * Return: pointer to the char in s which is in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0;

	while (s[count] != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				return (s + count);
			}
			i++;
		}
		count++;
	}
	return (NULL);
}
