#include <stdargs.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters passed to it
 * @n: number of parameters
 * @...: extra parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list args;
	va_start(args, n);
	while (i < n)
	{
		sum = int va_arg(arg, int) + sum;
		i++;
	}
	return (sum);
}
