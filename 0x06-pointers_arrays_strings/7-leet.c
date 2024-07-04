#include<string.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char lower[5] = "aeotl";
	char upper[5] = "AEOTL";
	char nos[5] = "43071";
	int i, size;

	size = strlen(str);

	for (i = 0; i < size; i++)
	{
		int y = 0;

		for (; y < 5; y++)
		{
			if (str[i] == lower[y] || str[i] == upper[y])
			{
				str[i] = nos[y];
			}
		}
	}


	return (str);
}
