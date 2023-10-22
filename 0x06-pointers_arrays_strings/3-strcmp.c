#include "main.h"

/**
 * _strcmp - compares two strings lexicographically
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if similar, -1 if s1 < s2, 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int pos = 0;

	while (s1[pos] != '\0' && s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
		{
			return (s2[pos] - s2[pos]);
		}
		i++;
	}
	return (0);

}
