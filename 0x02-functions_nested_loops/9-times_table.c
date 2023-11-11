#include "main.h"

/**
 * times_table - prints 9 times table
 * Return:
 */
void times_table(void)
{
        int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar("%d", x*y);
			_putchar("'");
			_putchar(" ");
			if (y == 9)
			{
				_putchar("\n");
			}
		}
	}
}

