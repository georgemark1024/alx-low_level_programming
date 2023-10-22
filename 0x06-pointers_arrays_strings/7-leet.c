#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char copy[67];
	int i = 0;
	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char upper[6] = {'A', 'E', 'O', 'T', 'L'};
	int nos[5] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	i = 0;
	while (copy[i] != '\0')
	{
		if (copy[i] == lower[i] || copy[i] == upper[i])
		{
			copy[i] = nos[i + '0'];
		}
		i++;
	}
	return (copy);
}
