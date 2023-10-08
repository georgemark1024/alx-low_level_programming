#include<stdio.h>

/**
 * main - Prints the alphabet in reverse
 * Documentation: User a for loop to print chars in reverse
 * Return: Returns 0 to exit
 */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
