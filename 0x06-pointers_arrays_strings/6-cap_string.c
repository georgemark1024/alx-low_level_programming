#include "main.h"

/**
 * is_a_sep - checks if a character is a separator
 * @c: character
 * Return: 1 if a separator, 0 if not a separator
 */

int is_a_sep(char c)
{
	int i = 0;
	char sep[13] = " \t\n,;.!?\"(){}";

	while (i < 14)
	{
		if (c == sep[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalises letters in a string that come after a separator
 * @str: string to be checked
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (is_a_sep(str[i]) == 1)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
