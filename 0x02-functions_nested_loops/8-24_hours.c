#include "main.h"

void jack_bauer(void)
{
	int h_10, hour_ones, minute_10, m_1;

	for (h_10 = 0; h_10 <= 2; h_10++)
	{
		for (hour_ones = 0; hour_ones <= 9; hour_ones++)
		{
			if ((h_10 < 2) || (h_10 == 2 && hour_ones <= 3))
			{
				for (minute_10 = 0; minute_10 <= 5; minute_10++)
				{
					for (m_1 = 0; m_1 <= 9; m_1++)
					{
						_putchar(h_10 + '0');
						_putchar(hour_ones + '0');
						_putchar(':');
						_putchar(minute_10 + '0');
						_putchar(m_1 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
