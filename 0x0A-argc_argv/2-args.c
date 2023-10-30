#include<stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: number of elements in argv or the numebr of arguments
 * passed to the program including the program name
 * @argv: array containing arguments passed to the command line
 * Return: 0 on success, otherwise on failure
 */

int main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}

