#include "main.h"

/**
 * cap_string - capitalises letters in a string that come after a separator
 * @str: string to be checked
 * Return: string
 */

char *cap_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_a_sep(str[i]) == 1)
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}

/**
 * is_a_sep - checks if a character is a separator
 * @c: character
 * Return: 1 if a separator, 0 if not a separator
 */

int is_a_sep(char c)
{
	int i = 0;
	char sep[14] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		else
			return (0);
		i++;
	}
}
