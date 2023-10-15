#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Assigns a random number to n
 * Documentation: States if n is +ve, 0 or -ve
 * @n: Char int
 * Return: returns 0 to exit the function
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
