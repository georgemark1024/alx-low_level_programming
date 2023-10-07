#include<stdio.h>

/**
 * main - Prints the alphabet in both lower and upper cases
 * Documentation: Uses two while loops and char(s) to print the alphabets
 * Return: returns 0 to exit
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x < 'z')
	{
		putchar (x);
		x++;
	}
	while (y < 'Z')
	{
		putchar (y);
		y++;
	}
	putchar('\n');
	return (0);
}
