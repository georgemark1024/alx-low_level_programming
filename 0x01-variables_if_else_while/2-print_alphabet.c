#include<stdio.h>

/**
 * main - Prints alphabets
 * Documtation: uses putchar func and a while loops to prints the alphabets
 * Return: returns 0 to exit
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
