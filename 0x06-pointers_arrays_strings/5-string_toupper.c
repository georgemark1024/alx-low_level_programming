#include "main.h"

/**
 * string_toupper - convert lowercase letters in a string to uppercase
 * @str: string
 * Return: pointer to upper case string
 */

char *string_toupper(char *str)
{
	int i = 0;

	if (str[i] <= 122 && str[i] >= 97)
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (&str);
}
