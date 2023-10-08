#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Documentation: Uses putchar and a while loop
 * Return: return 0 to exit
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if(letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
