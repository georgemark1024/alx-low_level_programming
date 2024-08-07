#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
