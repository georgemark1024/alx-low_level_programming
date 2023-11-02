#include"main.h"

/**
 * strlen - computes the length of a string
 * @str: string
 * Return: length of string
 */

unsigned long int _strlen(char *str)
{
        unsigned long int i = 0;

        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}
