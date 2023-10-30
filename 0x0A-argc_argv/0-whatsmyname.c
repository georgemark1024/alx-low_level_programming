#include<stdio.h>

/**
 * main - prints the name of the program and a new line
 * @agrc: length of array argv
 * @argv: array containing arguments passed to the command line
 * Return: 0 on zero success
 */

int main(__attribute__((unused))int agrc, char **agrv)
{
	printf("%s\n", agrv[0]);
	return (0);
}

