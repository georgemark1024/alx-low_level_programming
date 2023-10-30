#include<stdio.h>

/**
 * main - prints the results of a multiplication between 2 nos
 * @argc: number of commandline arguments
 * @argv: array containing commandline arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	res = (int)argv[1] * (int)argv[2];
	printf("%d\n", res);
	return (0);
}
