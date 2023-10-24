#include "main.h"
#include<stddef.h>

/**
 * _strstr - finds the first occurrence of the needle in haystack
 * @haystack: the large string
 * @needle: substring
 * Return: pointer to the beginning of the subtring in haystack, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	while (haystack[count] != '\0')
	{
		int i = 0;

		while (haystack[count] == needle[i])
		{
			if (needle[i] == '\0')
			{
				return (haystack + count - i);
			}
			if (haystack[count] == '\0')
			{
				return (NULL);
			}
			count++;
			i++;

		}
		count++;
	}
	return (NULL);
}
