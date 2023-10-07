#include<stdio.h>

/**
 * main - Prints numbers from 0 to 10
 * Documentation: Initializes using int but uses char as output
 * Return: Returns 0 to exit
 */
int main(void)
{
	int num = 0;

	while(num < 10)
		putchar(num + "0");
		putchar("\n");
		num++;

	return(0);
}
