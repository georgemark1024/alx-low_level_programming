#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Assigns a random number to n
 * Documentation: It assigns a random number to the variable n and states if n is +ve, 0 or -ve
 * Return: returns 0 to exit the function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("%d is positive\n", n);
	else if(n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n");
	return(0);
}
