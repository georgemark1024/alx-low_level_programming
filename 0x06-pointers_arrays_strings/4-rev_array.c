#include "main.h"
#include <unistd.h>

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	while (n >= 0)
	{
		_putchar(a[n]);
		n--;
	}
}
/** _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:; On success 1
 * On error. -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
