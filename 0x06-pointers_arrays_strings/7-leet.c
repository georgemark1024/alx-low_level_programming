#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int i = 0;
	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char upper[6] = {'A', 'E', 'O', 'T', 'L'};
	int nos[5] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		if (str[i] == lower[i] || str[i] == upper[i])
		{
			str[i] = nos[i];
		}
		i++;
	}
	return (str);
}
