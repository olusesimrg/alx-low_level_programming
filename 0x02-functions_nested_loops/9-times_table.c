#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int x, y, multiple;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			multiple = x * y;
			if (x == 0)
			{
				_putchar(multiple + '0');
			}
			else if (multiple >= 10)
			{
				_putchar(' ');
				_putchar(multiple / 10 + '0');
				_putchar(multiple % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

