#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array resemnling the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int x;

	for (; i < 8; i++)
	{
		x = 0;
		for (; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
