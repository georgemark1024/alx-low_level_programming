#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Number
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
