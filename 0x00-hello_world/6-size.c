#include<stdio.h>

/*
 * main - prints the size of various types depending on the computer
 * Description: It calculates the size in bytes on different data types
 * Return: returns 0 to exit
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %lu bytes(s)\n",sizeof(x));
	printf("Size of an int: %lu bytes(s)\n",sizeof(y));
	printf("Size of a long int: %lu bytes(s)\n",sizeof(z));
	printf("Size of a long long: %lu bytes(s)\n",sizeof(a));
	printf("Size of a float: %lu bytes(s)\n",sizeof(b));
	return (0);
}
