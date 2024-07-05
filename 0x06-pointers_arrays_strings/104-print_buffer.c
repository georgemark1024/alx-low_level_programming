#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include "main.h"

/*
 * print_buffer - prints contents of a buffer
 * @b: buffer
 * @size: buffer size
 * Return: void
 **/

void print_buffer(char *b, int size)
{
	int i = 0, j, n, loops;
	char line[11];

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	loops = ceil(size / 10);
	for (n = 0; n <= loops; n++)
	{
		printf("%08x: ", i);
		for (j = 0; j <= 9; j++, i++)
		{
			if (isprint(b[i]))
				line[j] = b[i];
			else
				line[j] = '.';

			if (i == size)
			{
				line[j] = '\0';
                        	break;
			}
			else if (j == 9)
				line[11] = '\0';
		}
		for(j = 0; j < 9; j+= 2)
		{
			printf("%02x%02x ", line[j], line[j + 1]);
		}
                printf("%s\n", line);
	}
}
