#include<stdio.h>

/**
 * main - adds postive numbers
 * @argc: number of commandline arguments
 * @argv: commandline arguments
 * Return: 0 on success
 */

int main(int argc, char**argv)
{
	int count = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[count] >= 48 && argv[count] <= 57)
	{
		sum += atoi(argv[count]);
		if (count == argc - 1)
		{
			return (0);
		}
	}
	printf("Error\n");
	return (0);
}
