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

	for (; s[count] != '\0'; count++)
	{
		while (accept[count] != '\0')
		{
			if (s[count] == accept[count])
			{
				tracker++;
			}
		}
	}
	return (tracker);
}
