#include<stdio.h>

/**
 * main - Size calculator
 *
 * Description: It calculates the size in bytes on different data types
 *
 * Return: returns 0 to exit
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %lu byte(s)\n", sizeof(x));
	printf("Size of an int: %lu byte(s)\n", sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(b));
	return (0);
}
