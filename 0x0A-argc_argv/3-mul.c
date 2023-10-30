#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the results of a multiplication between 2 nos
 * @argc: number of commandline arguments
 * @argv: array containing commandline arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int res, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
