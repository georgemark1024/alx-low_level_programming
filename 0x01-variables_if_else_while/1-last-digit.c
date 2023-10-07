#include<stdlib.h>
#include<time.h>

/**
 * main - Assigns a random number to n and shows it state
 * Documentation: It uses the if else if looops to run comparison tests and prints relevant output depending on the conditions passed
 * Return: returns 0 to exit function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rant() - RAND_MAX /2;
	printf("Last digit of %n is");
	if (n > 5)
		printf(" and is greater than 5\n")
	else if (n < 6 && n > 0)
		printf(" and is less than 6 and not 0\n")
	else
		printf(" and is 0\n")
	return (0);
}
