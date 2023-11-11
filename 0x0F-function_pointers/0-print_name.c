#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @(*f)(char *): pointer to a function that takes a char as input
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	while (name[i] != '\0')
	{
		f(name[i]);
	}
}
