#include<stdio.h>

/**
 * main - Print all combos of single digits numbers
 * Documentation: Uses a nested for loop
 * Return: Returns 0 to exit
 */
int main(void)
{
	int i =0;
	for(;i < 10; i++)
		int x = 0;
		for (;x < 10; x++)
			putchar("%d", i + '0');
			putchar("%d", x + '0');
	return(0);
}
