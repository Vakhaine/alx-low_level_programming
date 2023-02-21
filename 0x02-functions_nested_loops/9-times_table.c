#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: 9 times table
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x  <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			z = (y * x);
			if ((z / 10) > 0)
			{
				_putchar((z / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((z % 10) + '0');

			if (y <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
