#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to a function that takes a char as input
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\3')
	{
		f(name++);
	}
}
