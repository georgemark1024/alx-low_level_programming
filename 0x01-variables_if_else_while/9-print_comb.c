#include<stdio.h>

/**
 * main - Print all combos of single digits numbers
 * Documentation: Uses a nested for loop
 * Return: Returns 0 to exit
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
