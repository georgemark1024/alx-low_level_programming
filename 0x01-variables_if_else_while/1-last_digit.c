#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Assigns a random number to n and shows it state
 *
 * Documentation: It uses the if else if looops
 * to run comparison tests and prints relevant output
 * depending on the conditions passed
 *
 * Return: returns 0 to exit function
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	printf("Last digit of %d is", n);
	if (last_num > 5)
		printf(" %d and is greater than 5\n", last_num);
	else if (last_num < 6 && last_num > 0)
		printf(" %d and is less than 6 and not 0\n", last_num);
	else if (last_num == 0)
		printf(" %d and is 0\n", last_num);
	return (0);
}
