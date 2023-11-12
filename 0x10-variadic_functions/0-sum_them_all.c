#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters passed to it
 * @n: number of parameters
 * @...: extra parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i < n)
	{
		sum = va_arg(args, int) + sum;
		i++;
	}
	va_end(args);
	return (sum);
}
