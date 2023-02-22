#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 * the function uses two nested for loops, inner and outer
 * within the environ of the variable i and o with p
 * as variable for thier product (multipler)
 */
void print_times_table(int n)
{
	int i, o, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (o = 1; o <= n; o++)
			{
				_putchar(',');
				_putchar(' ');

				p = i * o;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
