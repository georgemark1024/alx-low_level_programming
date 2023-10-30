#include<stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments passed to the command line
 * @argv: array containing arguments passed to the command line
 * Return: 0 on success, otherwise on error
 */

int main(int argc, __attribute__((unused))char **argv)
{
	int arg_number;

	arg_number = argc - 1;
	printf("%d\n", arg_number);
	return (0);
}
