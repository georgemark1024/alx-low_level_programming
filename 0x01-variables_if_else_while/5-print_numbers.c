#include<stdio.h>

/**
 * main - Prints numbers from 0 to 9
 * Documentation: Loops through single digit
 * decimal numbers and prints them out
 * Return: Returns 0 to exit code
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
