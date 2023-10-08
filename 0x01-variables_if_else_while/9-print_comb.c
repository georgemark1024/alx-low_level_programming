#include<stdio.h>

/**
 * main - Print all combos of single digits numbers
 * Documentation: Uses a nested for loop
 * Return: Returns 0 to exit
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (i == 9)
			putchar('\n');
	}

	return (0);
}
