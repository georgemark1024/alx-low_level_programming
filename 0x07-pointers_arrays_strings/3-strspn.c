#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: reference string
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int tracker = 0;

	while (s[count] != '\0')
	{
		int i = 0;
		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				tracker++;
				break;
			}
			i++;
		}
		count++;
	}
	return (tracker);
}
